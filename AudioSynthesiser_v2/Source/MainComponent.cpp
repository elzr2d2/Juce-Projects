#include "MainComponent.h"


MainComponent::MainComponent(): audioSynth(processor)
{
    
    setAudioChannels (0, 2);
	addAndMakeVisible(audioSynth);

	setSize(1000,600);
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
	audioSynth.setBounds(0, 0, 1000, 600);
}
