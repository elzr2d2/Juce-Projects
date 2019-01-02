#include "MainComponent.h"

MainComponent::MainComponent()
{
	addAndMakeVisible(trackPanel);


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
	Grid grid;
	using Track = Grid::TrackInfo;
	grid.templateRows = { Track(1_fr),Track(2_fr),Track(3_fr) };
	grid.templateColumns = { Track(1_fr), Track(2_fr)};
	grid.items = { GridItem(trackPanel), GridItem(toolBarPanel), GridItem(timelinePanel),GridItem(bottomPanel) };
	grid.performLayout(getLocalBounds());
	
}
