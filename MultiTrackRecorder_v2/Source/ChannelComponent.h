#pragma once

#include "../JuceHeader.h"
#include "JOELEngine.h"
class ChannelComponent : public AudioAppComponent, public ChangeListener
{
public:

	ChannelComponent();
	~ChannelComponent();

	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;
	
	File getFile();

	void paint(Graphics& g) override;
	void resized() override;

	void fileButtonClicked();

	void soloButtonClicked();
	void muteButtonClicked();
	void removeButtonClicked();
	
	void changeListenerCallback(ChangeBroadcaster * source) override;

	enum ChannelState
	{
		Soloing,
		Unsoloing,
		Muting,
		Unmuting
	};

	ChannelState state;

	void channelStateChanged(ChannelState newState);

private:


	File file;
	TextEditor name;
	Slider vol_Slider;
	Slider pan_Slider;
	TextButton soloButton{ "S" }, 
			   muteButton{ "M" },
			   removeButton{ "-" },
			   fileButton{ "..." };
	JOELEngine je;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelComponent)
};