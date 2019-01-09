#include "MainComponent.h"

MainComponent::MainComponent()
{
	//addAndMakeVisible(demo);
	addAndMakeVisible(cp);
	addAndMakeVisible(cb);



	// Some platforms require permissions to open input channels so request that here
	if (RuntimePermissions::isRequired(RuntimePermissions::recordAudio)
		&& !RuntimePermissions::isGranted(RuntimePermissions::recordAudio))
	{
		RuntimePermissions::request(RuntimePermissions::recordAudio,
			[&](bool granted) { if (granted)  setAudioChannels(2, 2); });
	}
	else
	{
		// Specify the number of input and output channels that we want to open
		setAudioChannels(2, 2);
	}

	setSize(800, 600);
}

MainComponent::~MainComponent()
{

	shutdownAudio();
}


void MainComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{

}

void MainComponent::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
	bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{

}


void MainComponent::paint(Graphics& g)
{

	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));


}

void MainComponent::resized()
{

	cb.setBounds(0, 0,cb.getWidth(),cb.getHeight());
	cp.setBounds(0, cb.getHeight()+10, cp.getWidth(), cp.getHeight());
	
}
