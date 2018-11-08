#include "MainComponent.h"


MainComponent::MainComponent()
{
    setSize (1000, 600);
    setAudioChannels (0, 2);
	addAndMakeVisible(channel);
	addAndMakeVisible(controller); 
}

MainComponent::~MainComponent()
{
    shutdownAudio();
}

void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{

}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{

    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{

}


void MainComponent::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
	controller.setBounds(200,200, controller.getWidth(), controller.getHeight());
}
