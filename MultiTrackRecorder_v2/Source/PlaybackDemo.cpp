#include "PlaybackDemo.h"
#include "TracktionDemoUtilities.h"


using namespace tracktion_engine;



void PlaybackDemo::addNewClipFromFile(const File& editFile, int trackNum)
{
	//AlertWindow::showMessageBox(AlertWindow::AlertIconType::NoIcon,"addNewClipFromFile test","great!");
	auto clip = loadAudioFileAsClip(editFile, trackNum);

	if (clip != nullptr)
		adjustClipProperties(*clip);
}

void PlaybackDemo::initTransport()
{
	//AlertWindow::showMessageBox(AlertWindow::AlertIconType::NoIcon,"initTransport test","great!");
	auto& transport = edit->getTransport();

	transport.setLoopRange({0.0, edit->getLength()});
	transport.looping = true;
	transport.play(false);
	transport.addChangeListener(this);
}


PlaybackDemo::PlaybackDemo() 
{

	edit = std::make_unique<Edit>(engine, createEmptyEdit(), Edit::forEditing, nullptr, 0);



											/*Buttons functionality*/
	playPauseButton.onClick = [this] { EngineHelpers::togglePlay(*edit); };
	settingsButton.onClick = [this] { EngineHelpers::showAudioDeviceSettings(engine); };
	addChannelButton.onClick = [this] { PlaybackDemo::addChannelButtonClicked(); };
	removeChannelButton.onClick = [this] { PlaybackDemo::removeChannelButtonClicked(); };
	recordButton.onClick = [this] { PlaybackDemo::recordButtonClicked(); };

	updatePlayButtonText();
									
	
											/*Buttons visibility*/
	addAndMakeVisible(playPauseButton);

	
	addAndMakeVisible(settingsButton);
	
	addAndMakeVisible(addChannelButton);

	addAndMakeVisible(recordButton);
	
	addAndMakeVisible(removeChannelButton);
	removeChannelButton.setEnabled(false);


	


	setSize(600, 400);
}

void PlaybackDemo::adjustClipProperties(WaveAudioClip& clip) const
{
	// Disable auto tempo and pitch, we'll handle these manually
	clip.setAutoTempo(false);
	clip.setAutoPitch(false);
	clip.setTimeStretchMode(TimeStretcher::defaultMode);
}

PlaybackDemo::~PlaybackDemo()
{
	engine.getTemporaryFileManager().getTempDirectory().deleteRecursively();
}



void PlaybackDemo::addChannelButtonClicked()
{

	fc.reset(new FileChooser("Choose a file to open...", File::getCurrentWorkingDirectory(), "*wav"));
	

									/*LAMBADA FUNCTION FOR FILE CHOOSER*/
	fc->launchAsync(FileBrowserComponent::canSelectMultipleItems | FileBrowserComponent::openMode | FileBrowserComponent::canSelectFiles,
		[&](const FileChooser& chooser)
		{
			
			const File file = chooser.getResult();
			addNewClipFromFile(file, trackNum++);

			initTransport();
			removeChannelButton.setEnabled(true);
		});
}

void PlaybackDemo::removeChannelButtonClicked()
{

	if (trackNum > 0)
	{
		if (trackNum - 1 == 0)
		{
			auto& track = edit->getOrInsertAudioTrackAt(--trackNum);
			removeTrack(*track);
			removeChannelButton.setEnabled(false);
		}
		else
		{
			auto& track = edit->getOrInsertAudioTrackAt(--trackNum);
			removeTrack(*track);
		}
	}
}

void PlaybackDemo::recordButtonClicked()
{	
	
}

void PlaybackDemo::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}



void PlaybackDemo::resized()
{
	auto area = getLocalBounds();

	settingsButton.setBounds(0,0,100,30);
	playPauseButton.setBounds(100, 0, 100,30);
	recordButton.setBounds(200, 0, 100, 30);
	addChannelButton.setBounds(0,playPauseButton.getBottom(),70,30);
	removeChannelButton.setBounds(addChannelButton.getWidth(), playPauseButton.getBottom(), 70, 30);


	
}

void PlaybackDemo::removeAllClips(AudioTrack& track)
{
	auto& clips = track.getClips();

	for (int i = clips.size(); --i >= 0;)
		clips.getUnchecked(i)->removeFromParentTrack();
}

void PlaybackDemo::removeTrack(AudioTrack& track)
{
	auto& clips = track.getClips();

	clips.getUnchecked(trackNum)->removeFromParentTrack();
}

WaveAudioClip::Ptr PlaybackDemo::loadAudioFileAsClip(const File& file, int trackNumber)
{
	auto track = edit->getOrInsertAudioTrackAt(trackNumber);

	if (track != nullptr)
	{
		//removeAllClips(*track);

		// Add a new clip to this track
		AudioFile audioFile(file);

		if (audioFile.isValid())
		{
			auto name = file.getFileNameWithoutExtension();

			EditTimeRange timeRange(0.0, audioFile.getLength());
			ClipPosition position = {timeRange, 0.0};

			auto newClip = track->insertWaveClip(name, file, position, false);

			if (newClip != nullptr)
				return newClip;
		}
	}

	

	return nullptr;
}

void PlaybackDemo::updatePlayButtonText()
{
	playPauseButton.setButtonText(edit->getTransport().isPlaying() ? "Pause" : "Play");
}

void PlaybackDemo::changeListenerCallback(ChangeBroadcaster*)
{
	updatePlayButtonText();
}
