#include "AudioProcessor.h"

void MainAudioProcessor::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{
    timeCounter.setSampleRate(sampleRate);
}

void MainAudioProcessor::releaseResources()
{

}

void MainAudioProcessor::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
    bufferToFill.clearActiveBufferRegion();

    timeCounter.addSamples(bufferToFill.numSamples);
}
