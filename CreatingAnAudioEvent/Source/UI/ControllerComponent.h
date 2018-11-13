#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "GlobalClockComponent.h"
#include "../Audio/AudioProcessor.h"

class ControllerComponent : public Component, public Button::Listener, public Timer
{
public:
    ControllerComponent(MainAudioProcessor& inProcessor);
    ~ControllerComponent();

    void paint(Graphics& g) override;
    void resized() override;
    void buttonClicked(Button* button) override;

    void timerCallback() override;

    std::string castGlobalClockToString(GlobalClock gb);

private:
    Rectangle<int> area;
    TextButton playButton;
    TextButton pauseButton;
    TextButton stopButton;

    Label clockLabel;

    GlobalClock gb;

    std::string gb_String = castGlobalClockToString(gb);

    MainAudioProcessor& processor;
};
