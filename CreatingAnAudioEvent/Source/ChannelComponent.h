#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class ChannelComponent : public AudioAppComponent, public Button::Listener
{

public:
	ChannelComponent();
	~ChannelComponent();


	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button* button) override;


private:
	
	TextEditor trackName;
	TextButton soloButton;
	TextButton muteButton;
	Slider volume;
	TextButton fileButton;
	File file;


	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelComponent)
};


