# Automatically generated CMakeLists, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required (VERSION 3.4.1)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Debug"  CACHE STRING "Choose the type of build." FORCE)
endif (NOT CMAKE_BUILD_TYPE)

###############################################################################
# Xcode (MacOSX)
###############################################################################

if (APPLE)

project ("MultiTrackRecorder" C CXX)

add_executable (APP
    "../../Source/AudioRecorder.cpp"
    "../../Source/AudioRecorder.h"
    "../../Source/AudioRecordingDemo.cpp"
    "../../Source/AudioRecordingDemo.h"
    "../../Source/ChannelComponent.cpp"
    "../../Source/ChannelComponent.h"
    "../../Source/Main.cpp"
    "../../Source/MainComponent.cpp"
    "../../Source/MainComponent.h"
    "../../Source/RecordingThumbnail.cpp"
    "../../Source/RecordingThumbnail.h"
    "../../Source/TracktionDemo.cpp"
    "../../Source/TracktionDemo.h"
    "../../Source/TracktionDemoUtilities.cpp"
    "../../Source/TracktionDemoUtilities.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_Decibels.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_Reverb.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.h"
    "../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.mm"
    "C:/CODE/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.h"
    "../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.mm"
    "C:/CODE/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/all.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/export.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/format.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.h"
    "../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.mm"
    "C:/CODE/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.h"
    "../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.mm"
    "C:/CODE/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.h"
    "../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.mm"
    "C:/CODE/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_Array.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayBase.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_DynamicObject.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ElementComparator.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_HashMap.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ListenerList.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_OwnedArray.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_PropertySet.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_SortedSet.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_SparseSet.h"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_Variant.cpp"
    "../../JuceLibraryCode/modules/juce_core/containers/juce_Variant.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_File.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_File.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileFilter.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileFilter.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileInputStream.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileOutputStream.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_FileSearchPath.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_TemporaryFile.h"
    "../../JuceLibraryCode/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../JuceLibraryCode/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../JuceLibraryCode/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../JuceLibraryCode/modules/juce_core/javascript/juce_Javascript.h"
    "../../JuceLibraryCode/modules/juce_core/javascript/juce_JSON.cpp"
    "../../JuceLibraryCode/modules/juce_core/javascript/juce_JSON.h"
    "../../JuceLibraryCode/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../JuceLibraryCode/modules/juce_core/logging/juce_FileLogger.h"
    "../../JuceLibraryCode/modules/juce_core/logging/juce_Logger.cpp"
    "../../JuceLibraryCode/modules/juce_core/logging/juce_Logger.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_BigInteger.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_Expression.cpp"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_Expression.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_Random.cpp"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_Random.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_Range.h"
    "../../JuceLibraryCode/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_Atomic.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_ByteOrder.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_HeapBlock.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_Memory.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_Singleton.h"
    "../../JuceLibraryCode/modules/juce_core/memory/juce_WeakReference.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_Result.cpp"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_Result.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_Uuid.cpp"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_Uuid.h"
    "../../JuceLibraryCode/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_Files.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_Misc.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_Network.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_android_Threads.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_curl_Network.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_linux_Files.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_linux_Network.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_Files.mm"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_Network.mm"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_Strings.mm"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../JuceLibraryCode/modules/juce_core/native/juce_mac_Threads.mm"
    "../../JuceLibraryCode/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_Files.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_Network.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../JuceLibraryCode/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_IPAddress.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_IPAddress.h"
    "../../JuceLibraryCode/modules/juce_core/network/juce_MACAddress.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_MACAddress.h"
    "../../JuceLibraryCode/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_NamedPipe.h"
    "../../JuceLibraryCode/modules/juce_core/network/juce_Socket.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_Socket.h"
    "../../JuceLibraryCode/modules/juce_core/network/juce_URL.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_URL.h"
    "../../JuceLibraryCode/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/network/juce_WebInputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_FileInputSource.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_InputSource.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_InputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_InputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_OutputStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_SubregionStream.h"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../JuceLibraryCode/modules/juce_core/streams/juce_URLInputSource.h"
    "../../JuceLibraryCode/modules/juce_core/system/juce_CompilerSupport.h"
    "../../JuceLibraryCode/modules/juce_core/system/juce_PlatformDefs.h"
    "../../JuceLibraryCode/modules/juce_core/system/juce_StandardHeader.h"
    "../../JuceLibraryCode/modules/juce_core/system/juce_SystemStats.cpp"
    "../../JuceLibraryCode/modules/juce_core/system/juce_SystemStats.h"
    "../../JuceLibraryCode/modules/juce_core/system/juce_TargetPlatform.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_Base64.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_Base64.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_Identifier.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_Identifier.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_NewLine.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_String.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_String.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringArray.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringArray.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringPairArray.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringPool.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringPool.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_StringRef.h"
    "../../JuceLibraryCode/modules/juce_core/text/juce_TextDiff.cpp"
    "../../JuceLibraryCode/modules/juce_core/text/juce_TextDiff.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ChildProcess.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_CriticalSection.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_Process.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_SpinLock.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_Thread.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_Thread.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadPool.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../JuceLibraryCode/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../JuceLibraryCode/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../JuceLibraryCode/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../JuceLibraryCode/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../JuceLibraryCode/modules/juce_core/time/juce_RelativeTime.h"
    "../../JuceLibraryCode/modules/juce_core/time/juce_Time.cpp"
    "../../JuceLibraryCode/modules/juce_core/time/juce_Time.h"
    "../../JuceLibraryCode/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../JuceLibraryCode/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../JuceLibraryCode/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../JuceLibraryCode/modules/juce_core/xml/juce_XmlDocument.h"
    "../../JuceLibraryCode/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../JuceLibraryCode/modules/juce_core/xml/juce_XmlElement.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/adler32.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/compress.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/crc32.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/crc32.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/deflate.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/deflate.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/infback.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inffast.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inffast.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inffixed.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inflate.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inflate.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inftrees.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/inftrees.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/trees.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/trees.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/uncompr.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/zconf.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/zconf.in.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/zlib.h"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/zutil.c"
    "../../JuceLibraryCode/modules/juce_core/zip/zlib/zutil.h"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../JuceLibraryCode/modules/juce_core/zip/juce_ZipFile.h"
    "../../JuceLibraryCode/modules/juce_core/juce_core.cpp"
    "../../JuceLibraryCode/modules/juce_core/juce_core.h"
    "../../JuceLibraryCode/modules/juce_core/juce_core.mm"
    "C:/CODE/JUCE/modules/juce_core/juce_core.h"
    "../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_Value.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_Value.h"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.cpp"
    "../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.h"
    "../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.mm"
    "C:/CODE/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../JuceLibraryCode/modules/juce_dsp/containers/juce_AudioBlock.h"
    "../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister.h"
    "../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h"
    "../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/filter_design/juce_FilterDesign.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/filter_design/juce_FilterDesign.h"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Convolution.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Convolution.h"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT.h"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT_test.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Windowing.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Windowing.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_FastMathApproximations.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_LookupTable.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_LookupTable.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix_test.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_Phase.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_Polynomial.h"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_SpecialFunctions.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/maths/juce_SpecialFunctions.h"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Bias.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter_test.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Gain.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter_Impl.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_LadderFilter.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_LadderFilter.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oscillator.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oversampling.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oversampling.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessContext.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorChain.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorDuplicator.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorWrapper.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_Reverb.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_StateVariableFilter.h"
    "../../JuceLibraryCode/modules/juce_dsp/processors/juce_WaveShaper.h"
    "../../JuceLibraryCode/modules/juce_dsp/juce_dsp.cpp"
    "../../JuceLibraryCode/modules/juce_dsp/juce_dsp.h"
    "../../JuceLibraryCode/modules/juce_dsp/juce_dsp.mm"
    "C:/CODE/JUCE/modules/juce_dsp/juce_dsp.h"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../JuceLibraryCode/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_Initialisation.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_Message.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_MessageListener.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_MessageManager.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../JuceLibraryCode/modules/juce_events/messages/juce_NotificationType.h"
    "../../JuceLibraryCode/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../JuceLibraryCode/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../JuceLibraryCode/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../JuceLibraryCode/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../JuceLibraryCode/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../JuceLibraryCode/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../JuceLibraryCode/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../JuceLibraryCode/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../JuceLibraryCode/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../JuceLibraryCode/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../JuceLibraryCode/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../JuceLibraryCode/modules/juce_events/timers/juce_MultiTimer.h"
    "../../JuceLibraryCode/modules/juce_events/timers/juce_Timer.cpp"
    "../../JuceLibraryCode/modules/juce_events/timers/juce_Timer.h"
    "../../JuceLibraryCode/modules/juce_events/juce_events.cpp"
    "../../JuceLibraryCode/modules/juce_events/juce_events.h"
    "../../JuceLibraryCode/modules/juce_events/juce_events.mm"
    "C:/CODE/JUCE/modules/juce_events/juce_events.h"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colour.h"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colours.h"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_FillType.h"
    "../../JuceLibraryCode/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../JuceLibraryCode/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../JuceLibraryCode/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../JuceLibraryCode/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Font.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Line.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Path.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Point.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../JuceLibraryCode/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_Image.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_Image.h"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageCache.h"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/placement/juce_Justification.h"
    "../../JuceLibraryCode/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../JuceLibraryCode/modules/juce_graphics/juce_graphics.cpp"
    "../../JuceLibraryCode/modules/juce_graphics/juce_graphics.h"
    "../../JuceLibraryCode/modules/juce_graphics/juce_graphics.mm"
    "C:/CODE/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/application/juce_Application.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_Component.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.h"
    "../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.mm"
    "C:/CODE/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.h"
    "../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.mm"
    "C:/CODE/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../JuceLibraryCode/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../JuceLibraryCode/modules/juce_opengl/juce_opengl.cpp"
    "../../JuceLibraryCode/modules/juce_opengl/juce_opengl.h"
    "../../JuceLibraryCode/modules/juce_opengl/juce_opengl.mm"
    "C:/CODE/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/BPMDetect.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/FIFOSampleBuffer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/FIFOSamplePipe.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/SoundTouch.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/soundtouch_config.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/STTypes.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/AAFilter.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/AAFilter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/BPMDetect.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/BPMDetect.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/cpu_detect.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/cpu_detect_x86.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSampleBuffer.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSampleBuffer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSamplePipe.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIRFilter.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIRFilter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateCubic.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateCubic.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateLinear.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateLinear.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateShannon.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateShannon.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/mmx_optimized.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/PeakFinder.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/PeakFinder.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/RateTransposer.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/RateTransposer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/SoundTouch.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/SoundTouch.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/sse_optimized.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/STTypes.h"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/TDStretch.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/TDStretch.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_FloatAudioFileFormat.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_FloatAudioFileFormat.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_LAMEManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_LAMEManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_RexFileFormat.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_RexFileFormat.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFifo.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFile.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFile.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileCache.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileCache.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileUtils.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileUtils.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileWriter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFormatManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFormatManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioProxyGenerator.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_LoopInfo.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_LoopInfo.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_RecordingThumbnailManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_SmartThumbnail.h"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_Thumbnail.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_Thumbnail.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_AlphaTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_AlphaTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieC4.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieC4.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieMCU.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieMCU.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieXT.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieXT.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationAutomap.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationAutomap.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationRemoteSl.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationRemoteSl.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_RemoteSLCompact.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_RemoteSLCompact.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_Tranzport.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_Tranzport.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ControlSurface.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ControlSurface.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_CustomControlSurface.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_CustomControlSurface.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalController.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalController.h"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalControllerManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalControllerManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_ActiveNoteList.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiChannel.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiControllerEvent.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiExpression.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiList.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiList.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiMessageArray.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiNote.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiProgramManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiProgramManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiSysexEvent.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_Musicality.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_Musicality.h"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_SelectedMidiEvents.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_SelectedMidiEvents.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_BreakpointOscillatorModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_BreakpointOscillatorModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_EnvelopeFollowerModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_EnvelopeFollowerModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_LFOModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_LFOModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_MIDITrackerModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_MIDITrackerModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierCommon.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierCommon.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierInternal.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_RandomModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_RandomModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_StepModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_StepModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableEditItem.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableEditItem.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameter.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameterTree.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationCurve.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationCurve.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationRecordManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationRecordManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MacroParameter.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MacroParameter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MidiLearn.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MidiLearn.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_Modifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_Modifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterChangeHandler.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterChangeHandler.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterControlMappings.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterControlMappings.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioClipBase.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioClipBase.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioSegmentList.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioSegmentList.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ChordClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ChordClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_Clip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_Clip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ClipEffects.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ClipEffects.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CollectionClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CollectionClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CompManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CompManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClipRenderJob.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClipRenderJob.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MarkerClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MarkerClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MidiClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MidiClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ReverseRenderJob.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClipChannel.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClipPattern.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeRenderJob.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WaveAudioClip.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WaveAudioClip.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_Edit.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_Edit.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditFileOperations.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditFileOperations.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditInsertPoint.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditInsertPoint.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditItem.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditItem.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditSnapshot.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditSnapshot.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditUtilities.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditUtilities.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_GrooveTemplate.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_GrooveTemplate.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_MarkerManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_MarkerManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_OldEditConversion.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSequence.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSequence.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSetting.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSetting.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_QuantisationType.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_QuantisationType.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_SourceFileReference.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_SourceFileReference.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSequence.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSequence.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSetting.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSetting.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimecodeDisplayFormat.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimecodeDisplayFormat.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimeSigSetting.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimeSigSetting.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ArchiveFile.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ArchiveFile.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Exportable.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Exportable.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ExportJob.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ExportJob.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ReferencedMaterialList.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Renderer.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Renderer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderOptions.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderOptions.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AudioTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AudioTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AutomationTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AutomationTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ChordTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ChordTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ClipTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ClipTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_EditTimeRange.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_EditTimeRange.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_FolderTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_FolderTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_MarkerTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_MarkerTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TempoTrack.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TempoTrack.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_Track.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_Track.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackCompManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackCompManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackItem.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackItem.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackOutput.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackOutput.h"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackUtils.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackUtils.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_AudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_AudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_BufferingAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_BufferingAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickMutingNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_CombiningAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_CombiningAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_FadeInOutAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_FadeInOutAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_HissingAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_HissingAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MidiAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MidiAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MixerAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MixerAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_PlayHeadAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_PlayHeadAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_SidechainAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_SpeedRampAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_TimedMutingAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_TrackMutingAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_WaveAudioNode.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_WaveAudioNode.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_InputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_InputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiInputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiInputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiOutputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiOutputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_OutputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_OutputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_PhysicalMidiInputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_PhysicalMidiInputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_VirtualMidiInputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_VirtualMidiInputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveInputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveInputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveOutputDevice.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveOutputDevice.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_AbletonLink.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_AbletonLink.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_DeviceManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_DeviceManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditInputDevices.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditInputDevices.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditPlaybackContext.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditPlaybackContext.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_LevelMeasurer.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_LevelMeasurer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MidiNoteDispatcher.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MidiNoteDispatcher.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MPEStartTrimmer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_PlayHead.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_ScopedSteadyLoad.h"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_TransportControl.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_TransportControl.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_ARAWrapperFunctions.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_ARAWrapperInterfaces.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneFileReader.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneFileReader.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneInstanceFactory.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Chorus.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Chorus.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Compressor.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Compressor.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Delay.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Delay.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Equaliser.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Equaliser.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_LowPass.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_LowPass.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiModifier.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiModifier.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiPatchBay.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiPatchBay.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PatchBay.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PatchBay.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Phaser.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Phaser.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PitchShift.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PitchShift.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Reverb.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Reverb.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_SamplerPlugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_SamplerPlugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalAutomatableParameter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalPlugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalPlugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_VSTXML.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxReturn.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxReturn.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxSend.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxSend.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_FreezePoint.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_FreezePoint.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_InsertPlugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_InsertPlugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_LevelMeter.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_LevelMeter.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackInstance.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackInstance.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackType.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackType.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_ReWirePlugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_ReWirePlugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_TextPlugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_TextPlugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VCA.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VCA.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VolumeAndPan.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VolumeAndPan.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_Plugin.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_Plugin.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginList.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginList.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginWindowState.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginWindowState.h"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_Project.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_Project.h"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItem.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItem.h"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItemID.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItemID.h"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectSearchIndex.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectSearchIndex.h"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Clipboard.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Clipboard.h"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Selectable.h"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectableClass.h"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectionManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectionManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_BeatDetect.h"
    "../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TempoDetect.h"
    "../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TimeStretch.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TimeStretch.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AppFunctions.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AppFunctions.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AsyncFunctionUtils.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioFadeCurve.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioScratchBuffer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioUtilities.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioUtilities.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BackgroundJobs.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BinaryData.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BinaryData.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ConstrainedCachedValue.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ConstrainedCachedValue.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CpuMeasurement.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CrashTracer.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CrashTracer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CurveEditor.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CurveEditor.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Ditherer.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Engine.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Engine.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_EngineBehaviour.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_FileUtilities.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_FileUtilities.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Identifiers.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_MiscUtilities.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_MouseHoverDetector.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Pitch.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PluginComponent.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PropertyStorage.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PropertyStorage.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_SettingID.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Spline.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_TemporaryFileManager.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_TemporaryFileManager.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_UIBehaviour.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_UIBehaviour.h"
    "../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ValueTreeUtilities.h"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine.h"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_audio_files.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_model_1.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_model_2.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_playback.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_plugins.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_timestretch.cpp"
    "../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_utils.cpp"
    "C:/CODE/tracktion_engine/modules/tracktion_engine/tracktion_engine.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.mm"
    "../../JuceLibraryCode/include_juce_audio_devices.mm"
    "../../JuceLibraryCode/include_juce_audio_formats.mm"
    "../../JuceLibraryCode/include_juce_audio_processors.mm"
    "../../JuceLibraryCode/include_juce_audio_utils.mm"
    "../../JuceLibraryCode/include_juce_core.mm"
    "../../JuceLibraryCode/include_juce_data_structures.mm"
    "../../JuceLibraryCode/include_juce_dsp.mm"
    "../../JuceLibraryCode/include_juce_events.mm"
    "../../JuceLibraryCode/include_juce_graphics.mm"
    "../../JuceLibraryCode/include_juce_gui_basics.mm"
    "../../JuceLibraryCode/include_juce_gui_extra.mm"
    "../../JuceLibraryCode/include_juce_opengl.mm"
    "../../JuceLibraryCode/include_tracktion_engine_audio_files.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_model_1.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_model_2.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_playback.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_plugins.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_timestretch.cpp"
    "../../JuceLibraryCode/include_tracktion_engine_utils.cpp"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/AudioRecorder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/AudioRecordingDemo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/ChannelComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/RecordingThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/TracktionDemo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/TracktionDemoUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/containers/juce_AudioBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/filter_design/juce_FilterDesign.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/filter_design/juce_FilterDesign.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Convolution.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Convolution.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_FFT_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/frequency/juce_Windowing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_FastMathApproximations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_LookupTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_LookupTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_Matrix_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_Phase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_Polynomial.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_SpecialFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/maths/juce_SpecialFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Bias.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_FIRFilter_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Gain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_IIRFilter_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_LadderFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_LadderFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oscillator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oversampling.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Oversampling.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorChain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorDuplicator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_ProcessorWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_StateVariableFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/processors/juce_WaveShaper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/juce_dsp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/juce_dsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_dsp/juce_dsp.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_dsp/juce_dsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/BPMDetect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/FIFOSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/FIFOSamplePipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/SoundTouch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/soundtouch_config.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/include/STTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/AAFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/AAFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/BPMDetect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/BPMDetect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/cpu_detect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/cpu_detect_x86.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSampleBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIFOSamplePipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/FIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateCubic.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateCubic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateLinear.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateLinear.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateShannon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/InterpolateShannon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/mmx_optimized.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/PeakFinder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/PeakFinder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/RateTransposer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/RateTransposer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/SoundTouch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/SoundTouch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/sse_optimized.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/STTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/TDStretch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/3rd_party/soundtouch/source/SoundTouch/TDStretch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_FloatAudioFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_FloatAudioFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_LAMEManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_LAMEManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_RexFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/formats/tracktion_RexFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFileWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_AudioProxyGenerator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_LoopInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_LoopInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_RecordingThumbnailManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_SmartThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_Thumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/audio_files/tracktion_Thumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_AlphaTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_AlphaTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieC4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieC4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieMCU.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieMCU.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieXT.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_MackieXT.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationAutomap.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationAutomap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationRemoteSl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_NovationRemoteSl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_RemoteSLCompact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_RemoteSLCompact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_Tranzport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/types/tracktion_Tranzport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ControlSurface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ControlSurface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_CustomControlSurface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_CustomControlSurface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalController.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalController.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalControllerManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/control_surfaces/tracktion_ExternalControllerManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_ActiveNoteList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiChannel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiControllerEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiExpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiMessageArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiNote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiProgramManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiProgramManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_MidiSysexEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_Musicality.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_Musicality.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_SelectedMidiEvents.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/midi/tracktion_SelectedMidiEvents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_BreakpointOscillatorModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_BreakpointOscillatorModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_EnvelopeFollowerModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_EnvelopeFollowerModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_LFOModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_LFOModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_MIDITrackerModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_MIDITrackerModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierCommon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_ModifierInternal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_RandomModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_RandomModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_StepModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/modifiers/tracktion_StepModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableEditItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableEditItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomatableParameterTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationCurve.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationCurve.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationRecordManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_AutomationRecordManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MacroParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MacroParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MidiLearn.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_MidiLearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_Modifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_Modifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterChangeHandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterChangeHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterControlMappings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/automation/tracktion_ParameterControlMappings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioClipBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioClipBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioSegmentList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_AudioSegmentList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ChordClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ChordClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_Clip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_Clip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ClipEffects.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ClipEffects.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CollectionClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CollectionClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CompManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_CompManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClipRenderJob.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_EditClipRenderJob.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MarkerClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MarkerClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MidiClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_MidiClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_ReverseRenderJob.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClipChannel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_StepClipPattern.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WarpTimeRenderJob.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WaveAudioClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/clips/tracktion_WaveAudioClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_Edit.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_Edit.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditFileOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditFileOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditInsertPoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditInsertPoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditSnapshot.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditSnapshot.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_EditUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_GrooveTemplate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_GrooveTemplate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_MarkerManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_MarkerManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_OldEditConversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSetting.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_PitchSetting.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_QuantisationType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_QuantisationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_SourceFileReference.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_SourceFileReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSetting.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TempoSetting.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimecodeDisplayFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimecodeDisplayFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimeSigSetting.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/edit/tracktion_TimeSigSetting.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ArchiveFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ArchiveFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Exportable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Exportable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ExportJob.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ExportJob.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_ReferencedMaterialList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Renderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_Renderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderOptions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/export/tracktion_RenderOptions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AudioTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AudioTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AutomationTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_AutomationTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ChordTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ChordTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ClipTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_ClipTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_EditTimeRange.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_EditTimeRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_FolderTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_FolderTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_MarkerTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_MarkerTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TempoTrack.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TempoTrack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_Track.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_Track.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackCompManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackCompManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/model/tracks/tracktion_TrackUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_AudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_AudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_BufferingAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_BufferingAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickMutingNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_ClickNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_CombiningAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_CombiningAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_FadeInOutAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_FadeInOutAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_HissingAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_HissingAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MidiAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MidiAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MixerAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_MixerAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_PlayHeadAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_PlayHeadAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_SidechainAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_SpeedRampAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_TimedMutingAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_TrackMutingAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_WaveAudioNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/audionodes/tracktion_WaveAudioNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_InputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_InputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiInputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiInputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiOutputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_MidiOutputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_OutputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_OutputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_PhysicalMidiInputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_PhysicalMidiInputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_VirtualMidiInputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_VirtualMidiInputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveInputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveInputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveOutputDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/devices/tracktion_WaveOutputDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_AbletonLink.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_AbletonLink.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_DeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_DeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditInputDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditInputDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditPlaybackContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_EditPlaybackContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_LevelMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_LevelMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MidiNoteDispatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MidiNoteDispatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_MPEStartTrimmer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_PlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_ScopedSteadyLoad.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_TransportControl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/playback/tracktion_TransportControl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_ARAWrapperFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_ARAWrapperInterfaces.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneFileReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneFileReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/ARA/tracktion_MelodyneInstanceFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Chorus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Chorus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Compressor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Compressor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Delay.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Delay.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Equaliser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Equaliser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_LowPass.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_LowPass.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiModifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiModifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiPatchBay.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_MidiPatchBay.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PatchBay.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PatchBay.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Phaser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Phaser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PitchShift.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_PitchShift.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Reverb.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_SamplerPlugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/effects/tracktion_SamplerPlugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalAutomatableParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalPlugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_ExternalPlugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/external/tracktion_VSTXML.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxReturn.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxReturn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxSend.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_AuxSend.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_FreezePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_FreezePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_InsertPlugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_InsertPlugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_LevelMeter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_LevelMeter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_RackType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_ReWirePlugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_ReWirePlugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_TextPlugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_TextPlugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VCA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VCA.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VolumeAndPan.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/internal/tracktion_VolumeAndPan.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_Plugin.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_Plugin.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginWindowState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/plugins/tracktion_PluginWindowState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_Project.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_Project.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItemID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectItemID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectSearchIndex.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/project/tracktion_ProjectSearchIndex.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Clipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_Selectable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectableClass.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectionManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/selection/tracktion_SelectionManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_BeatDetect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TempoDetect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TimeStretch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/timestretch/tracktion_TimeStretch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AppFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AppFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AsyncFunctionUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioFadeCurve.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioScratchBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_AudioUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BackgroundJobs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BinaryData.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ConstrainedCachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ConstrainedCachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CpuMeasurement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CrashTracer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CrashTracer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CurveEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_CurveEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Ditherer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Engine.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Engine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_EngineBehaviour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_FileUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_FileUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Identifiers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_MiscUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_MouseHoverDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Pitch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PluginComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PropertyStorage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_PropertyStorage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_SettingID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_Spline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_TemporaryFileManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_TemporaryFileManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_UIBehaviour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_UIBehaviour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/utilities/tracktion_ValueTreeUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_audio_files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_model_1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_model_2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_playback.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_plugins.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_timestretch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/modules/tracktion_engine/tracktion_engine_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/CODE/tracktion_engine/modules/tracktion_engine/tracktion_engine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "../../JuceLibraryCode/modules"
)

target_compile_definitions (APP PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
    "JucePlugin_Build_Unity=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O0
    -stdlib=libc++
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "MultiTrackRecorder"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "H:\Juce-spacework\Main Project\Juce-Projects\MultiTrackRecorder\Builds\CLion\Debug-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.MultiTrackRecorder
    XCODE_ATTRIBUTE_PRODUCT_NAME "MultiTrackRecorder"
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "H:\Juce-spacework\Main Project\Juce-Projects\MultiTrackRecorder\Builds\CLion\Debug-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "MultiTrackRecorder"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "../../JuceLibraryCode/modules"
)

target_compile_definitions (APP PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
    "JucePlugin_Build_Unity=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
    -stdlib=libc++
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "MultiTrackRecorder"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "H:\Juce-spacework\Main Project\Juce-Projects\MultiTrackRecorder\Builds\CLion\Release-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.MultiTrackRecorder
    XCODE_ATTRIBUTE_PRODUCT_NAME "MultiTrackRecorder"
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "H:\Juce-spacework\Main Project\Juce-Projects\MultiTrackRecorder\Builds\CLion\Release-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "MultiTrackRecorder"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

