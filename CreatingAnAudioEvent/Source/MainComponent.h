#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "UI/ChannelComponent.h"
#include "UI/ControllerComponent.h"
#include "Audio/AudioProcessor.h"
#include "AudioSynthesiserDemo.h"

class MainComponent : public AudioAppComponent
{
public:

    MainComponent();
    ~MainComponent();

    void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    void paint(Graphics& g) override;
    void resized() override;

    MainAudioProcessor& getProcessor() { return processor; }

	
private:
    ChannelComponent channel;
    ControllerComponent controller;

	AudioSynthesiserDemo audioSynth;
    MainAudioProcessor processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
