#include "MainComponent.h"

MainComponent::MainComponent()
{
	addAndMakeVisible(trackPanel);
	addAndMakeVisible(bottomPanel);
	addAndMakeVisible(timelinePanel);
	addAndMakeVisible(toolBarPanel);


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
	Rectangle<int> toolbarFrame(0, 0,getWidth(),80);
	g.setColour(Colours::maroon);
	g.fillRect(toolbarFrame);
}

void MainComponent::resized()
{
	toolBarPanel.setBounds(0,0,toolBarPanel.getWidth(),toolBarPanel.getHeight());
	bottomPanel.setBounds(0, bottomPanel.getHeight(), bottomPanel.getWidth(), bottomPanel.getHeight());
	trackPanel.setBounds(0,toolBarPanel.getBottom(), trackPanel.getWidth(), trackPanel.getHeight());
	timelinePanel.setBounds(trackPanel.getRight(),toolBarPanel.getBottom(),timelinePanel.getWidth(),timelinePanel.getHeight());
	
}
