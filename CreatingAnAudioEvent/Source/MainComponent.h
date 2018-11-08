#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ChannelComponent.h"
#include "ControllerComponent.h"

class MainComponent   : public AudioAppComponent
{
public:

    MainComponent();
    ~MainComponent();


    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    void paint (Graphics& g) override;
    void resized() override;

private:
	ChannelComponent channel;
	ControllerComponent controller;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
