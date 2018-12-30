

#include "ChannelComponent.h"

using namespace tracktion_engine;

ChannelComponent::ChannelComponent()
{
	addAndMakeVisible(removeButton);
	addAndMakeVisible(soloButton);
	addAndMakeVisible(muteButton);
	addAndMakeVisible(vol_Slider);
	addAndMakeVisible(pan_Slider);

	vol_Slider.setRange(-100, 6);
	vol_Slider.setTextValueSuffix(" db");
	vol_Slider.addListener(this);
	vol_Slider.setSliderStyle(Slider::SliderStyle::LinearBar);

	pan_Slider.setRange(-100, 100);
	pan_Slider.addListener(this);
	pan_Slider.setSliderStyle(Slider::SliderStyle::Rotary);


	removeButton.onClick = [this] { ChannelComponent::removeButtonClicked(); };
	soloButton.onClick = [this] { ChannelComponent::soloButtonClicked(); };
	muteButton.onClick = [this] { ChannelComponent::muteButtonClicked(); };
	
	setSize(600, 400);
}

ChannelComponent::~ChannelComponent()
{

}

void ChannelComponent::paint(Graphics & g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void ChannelComponent::resized()
{

}

void ChannelComponent::removeButtonClicked()
{

}

void ChannelComponent::soloButtonClicked()
{

}

void ChannelComponent::muteButtonClicked()
{

}