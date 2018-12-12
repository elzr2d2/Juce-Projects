#include "TracktionDemoUtilities.h"

te::Project::Ptr EngineHelpers::createTempProject(te::Engine& engine)
{
	auto file = engine.getTemporaryFileManager().getTempDirectory().getChildFile("temp_project").
	                   withFileExtension(te::projectFileSuffix);
	te::ProjectManager::TempProject tempProject(*te::ProjectManager::getInstance(), file, true);
	return tempProject.project;
}

void EngineHelpers::showAudioDeviceSettings(te::Engine& engine)
{
	DialogWindow::LaunchOptions o;
	o.dialogTitle = TRANS("Audio Settings");
	o.dialogBackgroundColour = LookAndFeel::getDefaultLookAndFeel().findColour(ResizableWindow::backgroundColourId);
	o.content.setOwned(new AudioDeviceSelectorComponent(engine.getDeviceManager().deviceManager,
	                                                    0, 512, 1, 512, false, false, true, true));
	o.content->setSize(400, 600);
	o.launchAsync();
}

void EngineHelpers::browseForAudioFile(te::Engine& engine, std::function<void(const File&)> fileChosenCallback)
{
	auto fc = std::make_shared<FileChooser>("Please select an audio file to load...",
	                                        engine.getPropertyStorage().
	                                               getDefaultLoadSaveDirectory("pitchAndTimeExample"),
	                                        engine.getAudioFileFormatManager().readFormatManager.
	                                               getWildcardForAllFormats());

	fc->launchAsync(FileBrowserComponent::openMode + FileBrowserComponent::canSelectFiles,
	                [fc, &engine, callback = std::move(fileChosenCallback)](const FileChooser&)
	                {
		                const auto f = fc->getResult();

		                if (f.existsAsFile())
			                engine.getPropertyStorage().setDefaultLoadSaveDirectory("pitchAndTimeExample",
			                                                                        f.getParentDirectory());

		                callback(f);
	                });
}

void EngineHelpers::removeAllClips(te::AudioTrack& track)
{
	auto clips = track.getClips();

	for (int i = clips.size(); --i >= 0;)
		clips.getUnchecked(i)->removeFromParentTrack();
}

te::WaveAudioClip::Ptr EngineHelpers::loadAudioFileAsClip(te::Edit& edit, const File& file)
{
	// Find the first track and delete all clips from it
	if (auto track = edit.getOrInsertAudioTrackAt(0))
	{
		removeAllClips(*track);

		// Add a new clip to this track
		te::AudioFile audioFile(file);

		if (audioFile.isValid())
			if (auto newClip = track->insertWaveClip(file.getFileNameWithoutExtension(), file,
			                                         {{0.0, audioFile.getLength()}, 0.0}, false))
				return newClip;
	}

	return {};
}

void EngineHelpers::togglePlay(te::Edit& edit)
{
	auto& transport = edit.getTransport();

	if (transport.isPlaying())
		transport.stop(false, false);
	else
		transport.play(false);
}
