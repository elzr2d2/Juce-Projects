#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
class ControllerComponent: public AudioAppComponent, public Button::Listener
{
public:
	ControllerComponent();
	~ControllerComponent();

	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button* button) override;

private:
	Rectangle<int> area;
	TextButton playButton;
	TextButton pauseButton;
	TextButton stopButton;

};
