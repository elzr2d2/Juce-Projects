
#pragma once

#include "JuceHeader.h"
#include "EditViewState.h"
#include "ClipComponent.h"

using namespace tracktion_engine;
namespace te = tracktion_engine;

class AudioClipComponent : Component
{
public:
    AudioClipComponent (EditViewState&, te::Clip::Ptr);
    
	te::WaveAudioClip* getWaveAudioClip();
    
    void paint (Graphics& g);
    
private:
    void updateThumbnail();
    void drawWaveform (Graphics& g, te::AudioClipBase& c, te::SmartThumbnail& thumb, Colour colour,
                       int left, int right, int y, int h, int xOffset, bool drawLoopMarkers);
    void drawChannels (Graphics& g, te::SmartThumbnail& thumb, Rectangle<int> area, bool useHighRes,
                       te::EditTimeRange time, bool useLeft, bool useRight,
                       float leftGain, float rightGain);

    std::unique_ptr<te::SmartThumbnail> thumbnail;

	std::unique_ptr<te::Clip> clip;

	EditViewState& editViewState;
};