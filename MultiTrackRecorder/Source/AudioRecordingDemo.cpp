/*
  ==============================================================================

    AudioRecordingDemo.cpp
    Created: 26 Dec 2018 2:12:48pm
    Author:  El

  ==============================================================================
*/

#include "AudioRecordingDemo.h"

AudioRecordingDemo::AudioRecordingDemo()
{
	setOpaque(true);
	addAndMakeVisible(liveAudioScroller);

	addAndMakeVisible(explanationLabel);
	explanationLabel.setFont(Font(15.0f, Font::plain));
	explanationLabel.setJustificationType(Justification::topLeft);
	explanationLabel.setEditable(false, false, false);
	explanationLabel.setColour(TextEditor::textColourId, Colours::black);
	explanationLabel.setColour(TextEditor::backgroundColourId, Colour(0x00000000));

	addAndMakeVisible(recordButton);
	recordButton.setColour(TextButton::buttonColourId, Colour(0xffff5c5c));
	recordButton.setColour(TextButton::textColourOnId, Colours::black);

	recordButton.onClick = [this] { AudioRecordingDemo::recordButtonClicked(); };

	addAndMakeVisible(recordingThumbnail);

	audioDeviceManager.addAudioCallback(&liveAudioScroller);
	audioDeviceManager.addAudioCallback(&recorder);

	setSize(500, 500);
}

AudioRecordingDemo::~AudioRecordingDemo()
{
	audioDeviceManager.removeAudioCallback(&recorder);
	audioDeviceManager.removeAudioCallback(&liveAudioScroller);
}

void AudioRecordingDemo::recordButtonClicked()
{
	if (recorder.isRecording())
		stopRecording();
	else
		startRecording();
}

void AudioRecordingDemo::paint(Graphics& g)
{
	g.fillAll(LookAndFeel_V4::ColourScheme::UIColour::windowBackground);
}

void AudioRecordingDemo::resized()
{
	auto area = getLocalBounds();

	liveAudioScroller.setBounds(area.removeFromTop(80).reduced(8));
	recordingThumbnail.setBounds(area.removeFromTop(80).reduced(8));
	recordButton.setBounds(area.removeFromTop(36).removeFromLeft(140).reduced(8));
	explanationLabel.setBounds(area.reduced(8));
}

void AudioRecordingDemo::startRecording()
{
	if (!RuntimePermissions::isGranted(RuntimePermissions::writeExternalStorage))
	{
		SafePointer<AudioRecordingDemo> safeThis(this);

		RuntimePermissions::request(RuntimePermissions::writeExternalStorage,
			[safeThis](bool granted) mutable
		{
			if (granted)
				safeThis->startRecording();
		});
		return;
	}


	auto parentDir = File::getSpecialLocation(File::userDocumentsDirectory);

	lastRecording = parentDir.getNonexistentChildFile("JUCE Demo Audio Recording", ".wav");

	recorder.startRecording(lastRecording);

	recordButton.setButtonText("Stop");
	recordingThumbnail.setDisplayFullThumbnail(false);
}

void AudioRecordingDemo::stopRecording()
{
	recorder.stop();

	lastRecording = File();
	recordButton.setButtonText("Record");
	recordingThumbnail.setDisplayFullThumbnail(true);
}