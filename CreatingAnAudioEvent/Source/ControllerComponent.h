#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "GlobalClockComponent.h"

class ControllerComponent: public AudioAppComponent, public Button::Listener,public GlobalClock
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

	std::string castGlobalClockToString(GlobalClock gb)
	{
		double gb_Double = gb.Get();
		std::string gb_String = std::to_string(gb_Double);

		return gb_String;
	}

private:
	Rectangle<int> area;
	TextButton playButton;
	TextButton pauseButton;
	TextButton stopButton;

	Label clockLabel;

	GlobalClock gb;

	std::string gb_String = castGlobalClockToString(gb);
};
