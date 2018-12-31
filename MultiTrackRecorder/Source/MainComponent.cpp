#include "MainComponent.h"

MainComponent::MainComponent()
{
	addAndMakeVisible(channelOne);
	addAndMakeVisible(channelTwo);
	addAndMakeVisible(playPauseButton);
	addAndMakeVisible(stopButton);
	addAndMakeVisible(loopButton);

    setSize (800, 600);
    setAudioChannels (2, 2);
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
	Rectangle<int> toolbarErea(0, 0,getWidth(),80);
	g.setColour(Colours::maroon);
	g.fillRect(toolbarErea);
}

void MainComponent::resized()
{
	int border = 5;
	int button = 50;
	playPauseButton.setBounds(0, 0, button, button);
	stopButton.setBounds(button+10, 0, button, button);
	loopButton.setBounds(button*2+10*2, 0, button, button);
	channelOne.setBounds(0, 100, channelOne.getWidth(), channelOne.getHeight());
	channelTwo.setBounds(0, 100 * 2 + border, channelOne.getWidth(), channelOne.getHeight());
}
