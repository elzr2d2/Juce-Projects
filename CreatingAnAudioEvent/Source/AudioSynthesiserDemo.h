

#pragma once

#include "../modules/tracktion_engine/tracktion_engine.h"
#include "DemoUtilities.h"
#include "AudioLiveScrollingDisplay.h"

//==============================================================================
/** Our demo synth sound is just a basic sine wave.. */
struct SineWaveSound : public SynthesiserSound
{
    SineWaveSound() {}

    bool appliesToNote (int /*midiNoteNumber*/) override    { return true; }
    bool appliesToChannel (int /*midiChannel*/) override    { return true; }
};

//==============================================================================
/* Our demo synth voice just plays a sine wave.. */





//==============================================================================
// This is an audio source that streams the output of our demo synth.
struct SynthAudioSource  : public AudioSource
{
    SynthAudioSource (MidiKeyboardState& keyState)  : keyboardState (keyState)
    {
        // Add some voices to our synth, to play the sounds..
        for (auto i = 0; i < 4; ++i)
        {
           
            synth.addVoice (new SamplerVoice());    // and these ones play the sampled sounds
        }
    }


    void setUsingBell()
    {
        WavAudioFormat wavFormat;

        std::unique_ptr<AudioFormatReader> audioReader (wavFormat.createReaderFor (createAssetInputStream("H:\\Juce-spacework\\SynthDemo\\AudioSynthDemo\\AudioSynthesiserDemo\\Bell.wav"), true)); //<-- location?


        BigInteger allNotes;
        allNotes.setRange (0, 128, true);

		synth.clearSounds();
		synth.addSound(new SamplerSound("demo sound", *audioReader, allNotes, 74, 0.0, 0.1, 10.0));
    }

	void setUsingGuitar()
	{
		/**/

	}

	void setUsingMySound()
	{

		WavAudioFormat wavFormat;

		std::unique_ptr<AudioFormatReader> audioReader(wavFormat.createReaderFor(createAssetInputStream("H:\\Juce-spacework\\SynthDemo\\AudioSynthDemo\\AudioSynthesiserDemo\\Guitar.wav"), true));


		BigInteger allNotes;
		allNotes.setRange(0, 128, true);

		synth.clearSounds();
		synth.addSound(new SamplerSound("demo sound", *audioReader, allNotes, 74, 0.0, 0.1, 10.0));

	}


    void prepareToPlay (int /*samplesPerBlockExpected*/, double sampleRate) override
    {
        midiCollector.reset (sampleRate);

        synth.setCurrentPlaybackSampleRate (sampleRate);

	
    }

    void releaseResources() override {}

    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override
    {

        bufferToFill.clearActiveBufferRegion();

        MidiBuffer incomingMidi;

        midiCollector.removeNextBlockOfMessages (incomingMidi, bufferToFill.numSamples);

        keyboardState.processNextMidiBuffer (incomingMidi, 0, bufferToFill.numSamples, true);

        synth.renderNextBlock (*bufferToFill.buffer, incomingMidi, 0, bufferToFill.numSamples);
    }


	


    MidiMessageCollector midiCollector;

    MidiKeyboardState& keyboardState;

    Synthesiser synth;

	
	

};

//==============================================================================
class AudioSynthesiserDemo : public Component
{
public:
    AudioSynthesiserDemo()
    {
		

        addAndMakeVisible (keyboardComponent);

        addAndMakeVisible (bellButton);
		bellButton.setRadioGroupId (321);
		bellButton.onClick = [this] { synthAudioSource.setUsingBell(); };

		addAndMakeVisible(guitarButton);
		guitarButton.setRadioGroupId(321);
		guitarButton.onClick = [this] { synthAudioSource.setUsingGuitar(); };

		addAndMakeVisible(mySoundButton);
		mySoundButton.setRadioGroupId(321);
		mySoundButton.onClick = [this] { synthAudioSource.setUsingMySound(); };

        addAndMakeVisible (liveAudioDisplayComp);
        audioDeviceManager.addAudioCallback (&liveAudioDisplayComp);
        audioSourcePlayer.setSource (&synthAudioSource);

	

       #ifndef JUCE_DEMO_RUNNER
        RuntimePermissions::request (RuntimePermissions::recordAudio,
                                     [this] (bool granted)
                                     {
                                         int numInputChannels = granted ? 2 : 0;
                                         audioDeviceManager.initialise (numInputChannels, 2, nullptr, true, {}, nullptr);
                                     });
       #endif

        audioDeviceManager.addAudioCallback (&audioSourcePlayer);
        audioDeviceManager.addMidiInputCallback ({}, &(synthAudioSource.midiCollector));

        setOpaque (true);
        setSize (800, 600);
    }

    ~AudioSynthesiserDemo()
    {
        audioSourcePlayer.setSource (nullptr);
        audioDeviceManager.removeMidiInputCallback ({}, &(synthAudioSource.midiCollector));
        audioDeviceManager.removeAudioCallback (&audioSourcePlayer);
        audioDeviceManager.removeAudioCallback (&liveAudioDisplayComp);
	
	

	}

	void playRiff()
	{

		


		
	}
    //==============================================================================
    void paint (Graphics& g) override
    {
        g.fillAll (getUIColourIfAvailable (LookAndFeel_V4::ColourScheme::UIColour::windowBackground));
    }

    void resized() override
    {
        keyboardComponent   .setBounds (8, 96, getWidth() - 16, 64);
        //sineButton          .setBounds (16, 176, 150, 24);
		bellButton			.setBounds (16, 200, 150, 24);
		guitarButton	  .setBounds(16, 225, 150, 24);
		mySoundButton.setBounds(16, 250, 150, 24);
        liveAudioDisplayComp.setBounds (8, 8, getWidth() - 16, 64);
    }

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
	ToggleButton mySoundButton{ "My Sound" };

	TimeCounter tc;

	Synthesiser synth;

    LiveScrollingAudioDisplay liveAudioDisplayComp;

	//using tracktion

	te::Engine engine { ProjectInfo::projectName };
    te::Edit edit { engine, te::createEmptyEdit(), te::Edit::forEditing, nullptr, 0 };
    te::TransportControl& transport { edit.getTransport() };

    FileChooser audioFileChooser { "Please select an audio file to load...",
                                   engine.getPropertyStorage().getDefaultLoadSaveDirectory ("pitchAndTimeExample"),
                                   engine.getAudioFileFormatManager().readFormatManager.getWildcardForAllFormats() };

   

    //==============================================================================
    te::WaveAudioClip::Ptr getClip()
    {
        if (auto track = edit.getOrInsertAudioTrackAt (0))
            if (auto clip = dynamic_cast<te::WaveAudioClip*> (track->getClips()[0]))
                return *clip;

        return {};
    }

    File getSourceFile()
    {
        if (auto clip = getClip())
            return clip->getSourceFileReference().getFile();

        return {};
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioSynthesiserDemo)
};
