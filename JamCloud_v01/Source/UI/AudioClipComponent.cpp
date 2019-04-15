
#include "AudioClipComponent.h"
AudioClipComponent::AudioClipComponent (EditViewState& evs, te::Clip::Ptr c) : editViewState(evs), clip(c)
{
    updateThumbnail();
}

void AudioClipComponent::paint (Graphics& g)
{
    paint (g);
    
    if (editViewState.drawWaveforms && thumbnail != nullptr)
        drawWaveform (g, *getWaveAudioClip(), *thumbnail, Colours::black.withAlpha (0.5f),
                      0, getWidth(), 0, getHeight(), 0, false);
}

void AudioClipComponent::drawWaveform (Graphics& g, te::AudioClipBase& c, te::SmartThumbnail& thumb, Colour colour,
                                       int left, int right, int y, int h, int xOffset, bool drawLoopMarkers)
{
    auto getTimeRangeForDrawing = [this] (const int left, const int right) -> te::EditTimeRange
    {
        if (auto p = getParentComponent())
        {
            double t1 = editViewState.xToTime (left, p->getWidth());
            double t2 = editViewState.xToTime (right, p->getWidth());
            
            return { t1, t2 };
        }
        
        return {};
    };
    
    jassert (left <= right);
    const auto gain = c.getGain();
    const auto pan = thumb.getNumChannels() == 1 ? 0.0f : c.getPan();
    
    const float pv = pan * gain;
    const float gainL = (gain - pv);
    const float gainR = (gain + pv);
    
    const bool usesTimeStretchedProxy = c.usesTimeStretchedProxy();
    
    const auto clipPos = c.getPosition();
    auto offset = clipPos.getOffset();
    auto speedRatio = c.getSpeedRatio();
    
    g.setColour (colour);
    
    if (usesTimeStretchedProxy)
    {
        const Rectangle<int> area (left + xOffset, y, right - left, h);
        
        if (! thumb.isOutOfDate())
        {
            drawChannels (g, thumb, area, false,
                          getTimeRangeForDrawing (left, right),
                          c.isLeftChannelActive(), c.isRightChannelActive(),
                          gainL, gainR);
        }
    }
    else if (c.getLoopLength() == 0)
    {
        auto region = getTimeRangeForDrawing (left, right);
        
        auto t1 = (region.getStart() + offset) * speedRatio;
        auto t2 = (region.getEnd()   + offset) * speedRatio;
        
        drawChannels (g, thumb,
                      { left + xOffset, y, right - left, h },
                      false, { t1, t2 },
                      c.isLeftChannelActive(), c.isRightChannelActive(),
                      gainL, gainR);
    }
}

void AudioClipComponent::drawChannels (Graphics& g, te::SmartThumbnail& thumb, Rectangle<int> area, bool useHighRes,
                                       te::EditTimeRange time, bool useLeft, bool useRight,
                                       float leftGain, float rightGain)
{
    if (useLeft && useRight && thumb.getNumChannels() > 1)
    {
        thumb.drawChannel (g, area.removeFromTop (area.getHeight() / 2), useHighRes, time, 0, leftGain);
        thumb.drawChannel (g, area, useHighRes, time, 1, rightGain);
    }
    else if (useLeft)
    {
        thumb.drawChannel (g, area, useHighRes, time, 0, leftGain);
    }
    else if (useRight)
    {
        thumb.drawChannel (g, area, useHighRes, time, 1, rightGain);
    }
}

te::WaveAudioClip* AudioClipComponent::getWaveAudioClip()
{ 
	return dynamic_cast<te::WaveAudioClip*> (clip.get()); 
}

void AudioClipComponent::updateThumbnail()
{
    if (auto* wac = getWaveAudioClip())
    {
        te::AudioFile af (wac->getAudioFile());
        
        if (af.getFile().existsAsFile() || (! wac->usesSourceFile()))
        {
            if (af.isValid())
            {
                const te::AudioFile proxy ((wac->hasAnyTakes() && wac->isShowingTakes()) ? wac->getAudioFile() : wac->getPlaybackFile());
                
                if (thumbnail == nullptr)
                    thumbnail = std::make_unique<te::SmartThumbnail> (wac->edit.engine, proxy, *this, &wac->edit);
                else
                    thumbnail->setNewFile (proxy);
            }
            else
            {
                thumbnail = nullptr;
            }
        }
    }
}