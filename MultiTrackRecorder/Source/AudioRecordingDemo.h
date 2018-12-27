/*
  ==============================================================================

    AudioRecordingDemo.h
    Created: 26 Dec 2018 2:12:48pm
    Author:  El

  ==============================================================================
*/

#pragma once
#include "../JuceHeader.h"
#include "RecordingThumbnail.h"
#include "AudioRecorder.h"
#include "C:/CODE/tracktion_engine/modules/juce/examples/Assets/AudioLiveScrollingDisplay.h"


class AudioRecordingDemo:public Component
{
public:
	AudioRecordingDemo::AudioRecordingDemo();
	AudioRecordingDemo::~AudioRecordingDemo();
	void AudioRecordingDemo::paint(Graphics& g) override;
	void AudioRecordingDemo::resized() override;

	void AudioRecordingDemo::startRecording();
	void AudioRecordingDemo::stopRecording();
	void AudioRecordingDemo::recordButtonClicked();

private:
	LiveScrollingAudioDisplay liveAudioScroller;
    RecordingThumbnail recordingThumbnail;
    AudioRecorder recorder  {recordingThumbnail.getAudioThumbnail() };

    Label explanationLabel  { {}, "This page demonstrates how to record a wave file from the live audio input..\n\n"
                                  "Pressing record will start recording a file in your \"Documents\" folder."};

    TextButton recordButton { "Record" };
    File lastRecording;
	AudioDeviceManager audioDeviceManager;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioRecordingDemo)
};
