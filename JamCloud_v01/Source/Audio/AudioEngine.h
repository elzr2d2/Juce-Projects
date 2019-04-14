#pragma once

#include "JuceHeader.h"

using namespace tracktion_engine;
namespace te = tracktion_engine;

class AudioEngine
{
public:

	AudioEngine();
	~AudioEngine();

	void showAudioDeviceSettings(te::Engine& engine);

	void browseForAudioFile(te::Engine& engine, std::function<void(const File&)> fileChosenCallback);

	void removeAllClips(te::AudioTrack& track);

	te::AudioTrack* getOrInsertAudioTrackAt(te::Edit& edit, int index);
	te::WaveAudioClip::Ptr loadAudioFileAsClip(te::Edit& edit, const File& file);


	template<typename ClipType>
	typename ClipType::Ptr loopAroundClip(ClipType& clip);

	void togglePlay(te::Edit& edit);
	void toggleRecord(te::Edit& edit);

	void armTrack(te::AudioTrack& t, bool arm, int position = 0);
	bool isTrackArmed(te::AudioTrack& t, int position = 0);

	bool isInputMonitoringEnabled(te::AudioTrack& t, int position = 0);
	void enableInputMonitoring(te::AudioTrack& t, bool im, int position = 0);

	bool trackHasInput(te::AudioTrack& t, int position = 0);

private:
	
	te::Engine engine{ ProjectInfo::projectName };
	te::Edit& edit;
	te::SelectionManager selectionManager{ engine };
	std::unique_ptr<te::Edit> edit;
	//std::unique_ptr<EditComponent> editComponent;

	te::TransportControl& transport;
	te::SmartThumbnail smartThumbnail{ transport.engine, te::AudioFile(), *this, nullptr };


	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioEngine)
};