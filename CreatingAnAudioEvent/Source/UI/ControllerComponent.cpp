#include "ControllerComponent.h"
#include "../AudioSynthesiserDemo.h"


ControllerComponent::ControllerComponent(MainAudioProcessor& inProcessor): processor(inProcessor)
{
    setSize(600, 800);

    playButton.setButtonText("PLAY");
    playButton.addListener(this);

    pauseButton.setButtonText("PAUSE");
    pauseButton.addListener(this);

    stopButton.setButtonText("STOP");
    stopButton.addListener(this);

	playRiffButton.setButtonText("Play Riff");
	playRiffButton.addListener(this);

    clockLabel.setText(gb_String, NotificationType::dontSendNotification);
    clockLabel.setColour(Label::ColourIds::textColourId, Colours::aliceblue);

    addAndMakeVisible(playButton);
    addAndMakeVisible(pauseButton);
    addAndMakeVisible(stopButton);
	addAndMakeVisible(playRiffButton);
    addAndMakeVisible(clockLabel);

    startTimerHz(60);

}

ControllerComponent::~ControllerComponent()
{

}

void ControllerComponent::paint(Graphics& g)
{
    area.setSize(getParentWidth(), getParentHeight());

//    g.setColour(Colours::darkgrey);
//
//    g.fillAll();
//
//    g.setColour(Colours::blue);
//    g.drawText(clockLabel.getText(), getWidth() / 2, getHeight() / 2, 500, 500, Justification::centred);
}

void ControllerComponent::resized()
{
    auto width = 70;
    auto height = 30;
    auto space = 10;
    auto x = 10;
    auto y = 10;

    playButton.setBounds(x, y, width, height);
    pauseButton.setBounds(width + space, y, width, height);
    stopButton.setBounds(width * 2 + space, y, width, height);
	playRiffButton.setBounds(width * 4 + space, y, width, height);

    clockLabel.setBounds(50, 50, width, height);

    repaint();
}



void ControllerComponent::buttonClicked(Button* button)
{
	
	if (button == &playRiffButton)
	{
		ASD.playRiff();
	}
	
}

std::string ControllerComponent::castGlobalClockToString(GlobalClock gb)
{
    double gb_Double = gb.Get();
    std::string gb_String = std::to_string(gb_Double);

    return gb_String;
}

void ControllerComponent::timerCallback()
{
    auto timePassed = processor.getTimeCounter().getSecondsPassed();
    auto timePassedText = std::to_string(timePassed);

    clockLabel.setText(timePassedText, NotificationType::sendNotification);

    repaint();
}
