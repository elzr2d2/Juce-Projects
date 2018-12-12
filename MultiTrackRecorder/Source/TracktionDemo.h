#pragma once

#include "JuceHeader.h"

#include "TracktionDemoUtilities.h"

class PlaybackDemo : public Component,
                     private ChangeListener
{
public:
	PlaybackDemo();
	~PlaybackDemo();

	void paint(Graphics& g) override;
	void resized() override;

private:
	void addNewClipFromFile(const File& editFile, int trackNum);
	void initTransport();
	void removeAllClips(te::AudioTrack& track);

	te::WaveAudioClip::Ptr loadAudioFileAsClip(const File& file, int trackNumber);

	void adjustClipProperties(tracktion_engine::WaveAudioClip& clip) const;
	void updatePlayButtonText();
	void changeListenerCallback(ChangeBroadcaster*) override;

	te::Engine engine{ProjectInfo::projectName};
	std::unique_ptr<te::Edit> edit;

	TextButton settingsButton{"Settings"}, playPauseButton{"Play"};

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PlaybackDemo)
};
