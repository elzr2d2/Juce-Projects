
#pragma once

#include "DemoUtilities.h"
struct SineWaveSound : public SynthesiserSound
{
	SineWaveSound() {};

    bool appliesToNote (int /*midiNoteNumber*/) override    { return true; }
    bool appliesToChannel (int /*midiChannel*/) override    { return true; }
};
struct SynthAudioSource
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

	    const std::unique_ptr<AudioFormatReader> audioReader (wavFormat.createReaderFor (createAssetInputStream("H:\\Juce-spacework\\Juce-Projects\\AudioSynthesiser_v2\\Bell.wav"), true)); //<-- location?


        BigInteger allNotes;
        allNotes.setRange (0, 128, true);

        synth.clearSounds();
        synth.addSound (new SamplerSound ("demo sound",
                                          *audioReader,
                                          allNotes,
                                          74,   // root midi note
                                          0.1,  // attack time
                                          0.1,  // release time
                                          10.0  // maximum sample length
                                          ));
		
    }

	void setUsingGuitar()
	{
		WavAudioFormat wavFormat;

		const std::unique_ptr<AudioFormatReader> audioReader(wavFormat.createReaderFor(createAssetInputStream("H:\\Juce-spacework\\Juce-Projects\\AudioSynthesiser_v2\\Guitar.wav"), true)); 


		BigInteger allNotes;
		allNotes.setRange(0, 128, true);

		synth.clearSounds();
		synth.addSound(new SamplerSound("demo sound",
			*audioReader,
			allNotes,
			74,   // root midi note
			0.0,  // attack time
			0.1,  // release time
			10.0  // maximum sample length
		));

	}


    void prepareToPlay (int /*samplesPerBlockExpected*/, double sampleRate) 
    {
        midiCollector.reset (sampleRate);

        synth.setCurrentPlaybackSampleRate (sampleRate);
    }

	void releaseResources();

    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) 
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
