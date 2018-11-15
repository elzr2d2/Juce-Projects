#pragma once

#include "JuceHeader.h"
#include "TimeCounter.h"


class MainAudioProcessor: public AudioSource
{
public:
    MainAudioProcessor() {}

    void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
    void releaseResources() override;
    void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;

    TimeCounter& getTimeCounter() { return timeCounter; }
private:

    TimeCounter timeCounter;
};