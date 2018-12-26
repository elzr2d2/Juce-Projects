/*
  ==============================================================================

    AudioRecorder.h
    Created: 26 Dec 2018 2:11:09pm
    Author:  El

  ==============================================================================
*/

#pragma once
#include "../JuceHeader.h"


class AudioRecorder  : public AudioIODeviceCallback
{
public:
		AudioRecorder::AudioRecorder(AudioThumbnail & thumbnailToUpdate);
		AudioRecorder::~AudioRecorder();

		void AudioRecorder::startRecording(const File& file);
		void AudioRecorder::stop();
		bool AudioRecorder::isRecording() const;

		void AudioRecorder::audioDeviceAboutToStart(AudioIODevice* device) override;
		void AudioRecorder::audioDeviceStopped() override;

		void AudioRecorder::audioDeviceIOCallback(const float** inputChannelData, int numInputChannels, 
												  float** outputChannelData, int numOutputChannels,
			                                      int numSamples) override;


private:
	AudioThumbnail& thumbnail;
	TimeSliceThread backgroundThread{ "Audio Recorder Thread" }; // the thread that will write our audio data to disk
	std::unique_ptr<AudioFormatWriter::ThreadedWriter> threadedWriter; // the FIFO used to buffer the incoming data
	double sampleRate = 0.0;
	int64 nextSampleNum = 0;

	CriticalSection writerLock;
	std::atomic<AudioFormatWriter::ThreadedWriter*> activeWriter{ nullptr }
};