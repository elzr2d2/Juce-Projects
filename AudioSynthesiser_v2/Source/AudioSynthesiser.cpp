

#include "AudioSynthesiser.h"

AudioSynthesiser::AudioSynthesiser(MainAudioProcessor& inProcessor) : processor(inProcessor)
{
	addAndMakeVisible(keyboardComponent);

	addAndMakeVisible(bellButton);
	bellButton.setRadioGroupId(321);
	bellButton.onClick = [this] { synthAudioSource.setUsingBell(); };

	addAndMakeVisible(guitarButton);
	guitarButton.setRadioGroupId(321);
	guitarButton.onClick = [this] { synthAudioSource.setUsingGuitar(); };

	addAndMakeVisible(liveAudioDisplayComp);
	audioDeviceManager.addAudioCallback(&liveAudioDisplayComp);
	audioSourcePlayer.setSource(&synthAudioSource); //<----- why??
	
	addAndMakeVisible(recordMidi);
	recordMidi.addListener(this);
	
	addAndMakeVisible(playMidi);
	playMidi.addListener(this);

		

	clockLabel.setText(gb_String, NotificationType::dontSendNotification);
	clockLabel.setColour(Label::ColourIds::textColourId, Colours::aliceblue);
	addAndMakeVisible(clockLabel);

// startTimerHz(60);


#ifndef JUCE_DEMO_RUNNER
	RuntimePermissions::request(RuntimePermissions::recordAudio,
	                            [this](bool granted)
	                            {
		                            int numInputChannels = granted ? 2 : 0;
		                            audioDeviceManager.initialise(numInputChannels, 2, nullptr, true, {}, nullptr);
	                            });
#endif

	audioDeviceManager.addAudioCallback(&audioSourcePlayer);
	audioDeviceManager.addMidiInputCallback({}, &(synthAudioSource.midiCollector));

	setOpaque(true);
	setSize(600, 800);
}

AudioSynthesiser::~AudioSynthesiser()
    {
        audioSourcePlayer.setSource (nullptr);
        audioDeviceManager.removeMidiInputCallback ({}, &(synthAudioSource.midiCollector));
        audioDeviceManager.removeAudioCallback (&audioSourcePlayer);
        audioDeviceManager.removeAudioCallback (&liveAudioDisplayComp);
	
		recordMidi.removeListener(this);
		playMidi.removeListener(this);

		

	}


	void AudioSynthesiser::buttonClicked(Button* button)
	{
		if (button == &recordMidi)
		{
			
		}
		if (button == &playMidi)
		{
			
		}
	}

    //==============================================================================
    void AudioSynthesiser::paint (Graphics& g)
    {
        g.fillAll (getUIColourIfAvailable (LookAndFeel_V4::ColourScheme::UIColour::windowBackground));
	}

    void AudioSynthesiser::resized()
    {
        keyboardComponent   .setBounds (8, 96, getWidth() - 16, 64);
        //sineButton          .setBounds (16, 176, 150, 24);
		bellButton			.setBounds (16, 200, 150, 24);
		guitarButton	  .setBounds(16, 225, 150, 24);
        liveAudioDisplayComp.setBounds (8, 8, getWidth() - 16, 64);
		clockLabel.setBounds(50, 50, getWidth(), getHeight());
		recordMidi.setBounds(16, 250, 150, 24);
		playMidi.setBounds(16, 275, 150, 24);
    }

	std::string AudioSynthesiser::castGlobalClockToString(GlobalClock gb)
	{
		double gb_Double = gb.Get();
		std::string gb_String = std::to_string(gb_Double);

		return gb_String;
	}

	void AudioSynthesiser::timerCallback()
	{
		const auto timePassed = processor.getTimeCounter().getSecondsPassed();
		const auto timePassedText = std::to_string(timePassed);

		clockLabel.setText(timePassedText, NotificationType::sendNotification);

		repaint();
	}
