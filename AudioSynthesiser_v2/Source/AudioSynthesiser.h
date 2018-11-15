

#pragma once

#include "DemoUtilities.h"
#include "AudioLiveScrollingDisplay.h"
#include "SynthAudioSource.h"
#include "GlobalClock.h"
#include "AudioProcessor.h"
#include "JuceHeader.h"





//==============================================================================
class AudioSynthesiser : public Component,  public Timer ,public Button::Listener
{
public:
	AudioSynthesiser(MainAudioProcessor& inProcessor);
	~AudioSynthesiser();
	void paint(Graphics & g) override;
	void resized() override;
	void buttonClicked(Button* button) override;

	void timerCallback() override;

	std::string castGlobalClockToString(GlobalClock gb);



private:
    // if this PIP is running inside the demo runner, we'll use the shared device manager instead
   #ifndef JUCE_DEMO_RUNNER
    AudioDeviceManager audioDeviceManager;
   #else
    AudioDeviceManager& audioDeviceManager { getSharedAudioDeviceManager (0, 2) };
   #endif

	AudioDeviceManager otherDeviceManager;
	std::unique_ptr <AudioDeviceSelectorComponent> audioSettings;

    MidiKeyboardState keyboardState;
    AudioSourcePlayer audioSourcePlayer;
    SynthAudioSource synthAudioSource        { keyboardState };
    MidiKeyboardComponent keyboardComponent  { keyboardState, MidiKeyboardComponent::horizontalKeyboard};

    //ToggleButton sineButton     { "Use sine wave" };
    ToggleButton  bellButton{ "Bell" };
	ToggleButton guitarButton{ "Guitar" };

	TextButton recordMidi{ "Record" };
	TextButton playMidi{ "Play" };

    LiveScrollingAudioDisplay liveAudioDisplayComp;

	Label clockLabel;
	GlobalClock gb;
	std::string gb_String = castGlobalClockToString(gb);

	MainAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioSynthesiser)
};
