#include "ControllerComponent.h"



ControllerComponent::ControllerComponent()
{
	setSize(600, 800);

	playButton.setButtonText("PLAY");
	playButton.addListener(this);

	pauseButton.setButtonText("PAUSE");
	pauseButton.addListener(this);

	stopButton.setButtonText("STOP");
	stopButton.addListener(this);

	clockLabel.setText(gb_String, NotificationType::dontSendNotification);
	clockLabel.setColour(Label::ColourIds::textColourId,Colours::aliceblue);
	

	addAndMakeVisible(playButton);
	addAndMakeVisible(pauseButton);
	addAndMakeVisible(stopButton);
	addAndMakeVisible(clockLabel);

}

ControllerComponent::~ControllerComponent()
{

}

void ControllerComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{

}
void ControllerComponent::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{

}
void ControllerComponent::releaseResources()
{

}
void ControllerComponent::paint(Graphics& g)
{
	area.setSize(getParentWidth(), getParentHeight());
	
	g.setColour(Colours::darkgrey);

	g.fillAll();

	g.setColour(Colours::blue);
	g.drawText(clockLabel.getText(), getWidth() / 2, getHeight() / 2, 500,500, Justification::centred);
}
void ControllerComponent::resized()
{
	auto width = 70;
	auto height = 30;
	auto space = 10;
	auto x = 10;
	auto y = 10;

	playButton.setBounds(x, y, width, height);
	pauseButton.setBounds(width+space, y, width, height);
	stopButton.setBounds(width*2 + space, y, width, height);

	clockLabel.setBounds(getWidth()/2, getHeight()/2, width, height);
	
	repaint();
}
void ControllerComponent::buttonClicked(Button* button)
{
	
}
