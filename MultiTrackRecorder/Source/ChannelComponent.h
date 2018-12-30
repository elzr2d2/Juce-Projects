#pragma once

#include "JuceHeader.h"
#include "TracktionDemoUtilities.h"



class ChannelComponent : public Component, private ChangeListener, public Slider::Listener
{
public:
	ChannelComponent();
	~ChannelComponent();

	void paint(Graphics& g) override;
	void resized() override;

	void removeButtonClicked();
	void soloButtonClicked();
	void muteButtonClicked();

private:
	/*
		Volume
		Pan
		remove
		Solo
		Mute
	
	*/

	Slider vol_Slider;
	Slider pan_Slider;

	TextButton removeButton{ "-" }, soloButton{ "S" }, muteButton{"M"};

	Rectangle <int>rec;

	

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelComponent)
};