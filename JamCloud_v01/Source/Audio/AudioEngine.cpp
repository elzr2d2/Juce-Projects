/*
  ==============================================================================

    AudioEngine.cpp
    Created: 14 Apr 2019 12:41:46pm
    Author:  El

  ==============================================================================
*/

#include "AudioEngine.h"

AudioEngine::AudioEngine()
{
}

AudioEngine::~AudioEngine()
{
}

void AudioEngine::showAudioDeviceSettings(te::Engine& engine)
{
	DialogWindow::LaunchOptions o;
	o.dialogTitle = TRANS("Audio Settings");
	o.dialogBackgroundColour = LookAndFeel::getDefaultLookAndFeel().findColour(ResizableWindow::backgroundColourId);
	o.content.setOwned(new AudioDeviceSelectorComponent(engine.getDeviceManager().deviceManager,
		0, 512, 1, 512, false, false, true, true));
	o.content->setSize(400, 600);
	o.launchAsync();
}

void AudioEngine::browseForAudioFile(te::Engine& engine, std::function<void(const File&)> fileChosenCallback)
{
	auto fc = std::make_shared<FileChooser>("Please select an audio file to load...",
		engine.getPropertyStorage().getDefaultLoadSaveDirectory("pitchAndTimeExample"),
		engine.getAudioFileFormatManager().readFormatManager.getWildcardForAllFormats());

	fc->launchAsync(FileBrowserComponent::openMode + FileBrowserComponent::canSelectFiles,
		[fc, &engine, callback = std::move(fileChosenCallback)](const FileChooser&)
	{
		const auto f = fc->getResult();

		if (f.existsAsFile())
			engine.getPropertyStorage().setDefaultLoadSaveDirectory("pitchAndTimeExample", f.getParentDirectory());

		callback(f);
	});
}

void AudioEngine::removeAllClips(te::AudioTrack& track)
{
	auto clips = track.getClips();

	for (int i = clips.size(); --i >= 0;)
		clips.getUnchecked(i)->removeFromParentTrack();
}

te::AudioTrack* AudioEngine::getOrInsertAudioTrackAt(te::Edit & edit, int index)
{
	edit.ensureNumberOfAudioTracks(index + 1);
	return te::getAudioTracks(edit)[index];
}

te::WaveAudioClip::Ptr AudioEngine::loadAudioFileAsClip(te::Edit & edit, const File & file)
{
	// Find the first track and delete all clips from it
	if (auto track = getOrInsertAudioTrackAt(edit, 0))
	{
		removeAllClips(*track);

		// Add a new clip to this track
		te::AudioFile audioFile(file);

		if (audioFile.isValid())
			if (auto newClip = track->insertWaveClip(file.getFileNameWithoutExtension(), file,
				{ { 0.0, audioFile.getLength() }, 0.0 }, false))
				return newClip;
	}

	return {};
}

template<typename ClipType>
typename ClipType::Ptr AudioEngine::loopAroundClip(ClipType& clip)
{
	auto& transport = clip.edit.getTransport();
	transport.setLoopRange(clip.getEditTimeRange());
	transport.looping = true;
	transport.position = 0.0;
	transport.play(false);

	return clip;
}

void AudioEngine::togglePlay(te::Edit& edit)
{
	auto& transport = edit.getTransport();

	if (transport.isPlaying())
		transport.stop(false, false);
	else
		transport.play(false);
}

void AudioEngine::toggleRecord(te::Edit& edit)
{
	auto& transport = edit.getTransport();

	if (transport.isRecording())
		transport.stop(true, false);
	else
		transport.record(false);
}

void AudioEngine::armTrack(te::AudioTrack& t, bool arm, int position = 0)
{
	auto& edit = t.edit;
	for (auto instance : edit.getAllInputDevices())
		if (instance->getTargetTrack() == &t && instance->getTargetIndex() == position)
			instance->setRecordingEnabled(arm);
}

bool AudioEngine::isTrackArmed(te::AudioTrack & t, int position = 0)
{
	auto& edit = t.edit;
	for (auto instance : edit.getAllInputDevices())
		if (instance->getTargetTrack() == &t && instance->getTargetIndex() == position)
			return instance->isRecordingEnabled();

	return false;
}

bool AudioEngine::isInputMonitoringEnabled(te::AudioTrack & t, int position = 0)
{
	auto& edit = t.edit;
	for (auto instance : edit.getAllInputDevices())
		if (instance->getTargetTrack() == &t && instance->getTargetIndex() == position)
			return instance->getInputDevice().isEndToEndEnabled();

	return false;
}

void AudioEngine::enableInputMonitoring(te::AudioTrack & t, bool im, int position = 0)
{
	if (isInputMonitoringEnabled(t, position) != im)
	{
		auto& edit = t.edit;
		for (auto instance : edit.getAllInputDevices())
			if (instance->getTargetTrack() == &t && instance->getTargetIndex() == position)
				instance->getInputDevice().flipEndToEnd();
	}
}

bool AudioEngine::trackHasInput(te::AudioTrack & t, int position = 0)
{
	auto& edit = t.edit;
	for (auto instance : edit.getAllInputDevices())
		if (instance->getTargetTrack() == &t && instance->getTargetIndex() == position)
			return true;

	return false;
}
