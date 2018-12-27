/*
  ==============================================================================

    RecordingThumbnail.h
    Created: 26 Dec 2018 2:11:33pm
    Author:  El

  ==============================================================================
*/

#pragma once
#include "../JuceHeader.h"



class RecordingThumbnail  : public Component,
                            private ChangeListener
{
public:
	RecordingThumbnail::RecordingThumbnail();
	RecordingThumbnail::~RecordingThumbnail();


	void RecordingThumbnail::setDisplayFullThumbnail(bool displayFull);
	void RecordingThumbnail::paint(Graphics& g) override;

	AudioThumbnail& RecordingThumbnail::getAudioThumbnail();

private:
	void RecordingThumbnail::changeListenerCallback(ChangeBroadcaster* source) override;


    AudioFormatManager formatManager;
    AudioThumbnailCache thumbnailCache  { 10 };
    AudioThumbnail thumbnail            { 512, formatManager, thumbnailCache };


    bool displayFullThumb = false;
 

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RecordingThumbnail)
};