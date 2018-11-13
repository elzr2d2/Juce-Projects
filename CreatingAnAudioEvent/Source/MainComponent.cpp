#include "MainComponent.h"


MainComponent::MainComponent(): controller(processor)
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
    processor.prepareToPlay(samplesPerBlockExpected, sampleRate);
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    processor.getNextAudioBlock(bufferToFill);
}

void MainComponent::releaseResources()
{
    processor.releaseResources();
}


void MainComponent::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
	controller.setBounds(200,200, controller.getWidth(), controller.getHeight());
}
