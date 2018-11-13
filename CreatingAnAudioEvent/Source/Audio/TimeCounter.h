#pragma once

#include "JuceHeader.h"

class TimeCounter
{
public:
    TimeCounter() = default;

    void setSampleRate(double inSampleRate) { sampleRate = inSampleRate; }
    void addSamples(int samplesToAdd) { samplesPassed += samplesToAdd; }

    int64 getSamplesPassed() { return samplesPassed; }

    double getSecondsPassed();
private:

    double sampleRate = 0.0;
    int64 samplesPassed = 0;
};