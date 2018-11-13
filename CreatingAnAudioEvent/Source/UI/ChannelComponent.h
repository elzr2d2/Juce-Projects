#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class ChannelComponent : public Component, public Button::Listener
{

public:
    ChannelComponent();
    ~ChannelComponent();

    void paint(Graphics& g) override;
    void resized() override;
    void buttonClicked(Button* button) override;

private:

    TextEditor trackName;
    TextButton soloButton;
    TextButton muteButton;
    Slider volume;
    TextButton fileButton;
    File file;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelComponent)
};


