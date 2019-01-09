#pragma once

#include "../JuceHeader.h"
#include "JOELEngine.h"

class ControlBar : public AudioAppComponent,
				   public ChangeListener 
{
public:

	ControlBar();
	~ControlBar();

	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;

	

	void paint(Graphics& g) override;
	void resized() override;
	
private:

	enum TransportState
    {
        Stopped,
        Starting,
        Stopping,
        Playing,
        Recording
    };
    
    TransportState state;
    
    void playPauseButtonClicked();
    void stopButtonClicked();
    void recordButtonClicked();
	void transportStateChanged(TransportState newState);
	void changeListenerCallback(ChangeBroadcaster *source) override;

	AudioFormatManager formatManager;
	std::unique_ptr<AudioFormatReaderSource> playSource;
	AudioTransportSource transport;

	TextButton playPauseButton{ ">" }, 
			   stopButton{ "[]" },
			   recordButton{ "O" };
	JOELEngine je;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ControlBar)
};