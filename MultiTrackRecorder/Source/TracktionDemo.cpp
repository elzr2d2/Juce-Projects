#include "TracktionDemo.h"

using namespace tracktion_engine;



void PlaybackDemo::addNewClipFromFile(const File& editFile, int trackNum)
{
	auto clip = loadAudioFileAsClip(editFile, trackNum);

	if (clip != nullptr)
		adjustClipProperties(*clip);
}

void PlaybackDemo::initTransport()
{
	auto& transport = edit->getTransport();

	transport.setLoopRange({0.0, edit->getLength()});
	transport.looping = true;
	transport.play(false);
	transport.addChangeListener(this);
}


PlaybackDemo::PlaybackDemo()
{
	addAndMakeVisible(playPauseButton);
	addAndMakeVisible(settingsButton);
	addAndMakeVisible(addChannelButton);

	edit = std::make_unique<Edit>(engine, createEmptyEdit(), Edit::forEditing, nullptr, 0);

	addChannelButton.onClick = [this] { PlaybackDemo::openButtonClicked(); };
	
	

	initTransport();

	
	playPauseButton.onClick = [this] { EngineHelpers::togglePlay(*edit); };
	settingsButton.onClick = [this] { EngineHelpers::showAudioDeviceSettings(engine); };

	updatePlayButtonText();

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



void PlaybackDemo::openButtonClicked()
{

	fc.reset(new FileChooser("Choose a file to open...", File::getCurrentWorkingDirectory(), "*wav"));
	
	fc->launchAsync(FileBrowserComponent::canSelectMultipleItems | FileBrowserComponent::openMode | FileBrowserComponent::canSelectFiles,
		[&](const FileChooser& chooser)
		{

			addNewClipFromFile(chooser.getResult(), trackNum++);
			
		});
}


void PlaybackDemo::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}



void PlaybackDemo::resized()
{
	auto r = getLocalBounds();
	auto topR = r.removeFromTop(30);

	settingsButton.setBounds(topR.removeFromLeft(topR.getWidth() / 2).reduced(2));
	playPauseButton.setBounds(topR.reduced(2));
	addChannelButton.setBounds(0,playPauseButton.getBottom(),50,50);
}

void PlaybackDemo::removeAllClips(AudioTrack& track)
{
	auto& clips = track.getClips();

	for (int i = clips.size(); --i >= 0;)
		clips.getUnchecked(i)->removeFromParentTrack();
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
