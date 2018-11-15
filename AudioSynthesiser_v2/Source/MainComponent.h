#pragma once

#include "JuceHeader.h"
#include "AudioSynthesiser.h"
#include "AudioProcessor.h"

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

    AudioSynthesiser audioSynth;

    MainAudioProcessor processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
