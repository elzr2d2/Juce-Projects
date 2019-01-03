#pragma once

#include "../JuceHeader.h"

class ChannelComponent : public AudioAppComponent
{
public:

	ChannelComponent();
	~ChannelComponent();

	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;

	void removeButtonClicked();
	void soloButtonClicked();
	void muteButtonClicked();
	void fileButtonClicked();

	File getFile();

	void paint(Graphics& g) override;
	void resized() override;
	
private:

	File file;
	TextEditor name;
	Slider vol_Slider;
	Slider pan_Slider;
	TextButton soloButton{ "S" }, 
			   muteButton{ "M" },
			   removeButton{ "-" },
			   fileButton{ "..." };

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelComponent)
};

