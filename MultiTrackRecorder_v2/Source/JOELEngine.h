#include "JuceHeader.h"
#include "TracktionDemoUtilities.h"
using namespace tracktion_engine;
#pragma once

class JOELEngine : public Component {
public :

	JOELEngine();
	~JOELEngine();
	

	void addChannel(File file);
	void removeChannel();
	void removeTrack(te::AudioTrack & track);

private:

	te::WaveAudioClip::Ptr loadAudioFileAsClip(const File& file, int trackNumber);

	void addNewClipFromFile(const File& editFile, int trackNum);
	void initTransport();

	void removeAllClips(te::AudioTrack& track);

	void adjustClipProperties(tracktion_engine::WaveAudioClip& clip) const;

	te::Engine engine{ ProjectInfo::projectName };
	std::unique_ptr<te::Edit> edit;
	AudioFormatManager formatManager;
	std::unique_ptr<AudioFormatReaderSource> playSource;
	AudioTransportSource transport;

	int trackNum = 0;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(JOELEngine)
};