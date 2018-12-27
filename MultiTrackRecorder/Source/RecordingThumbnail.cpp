/*
  ==============================================================================

    RecordingThumbnail.cpp
    Created: 26 Dec 2018 2:11:33pm
    Author:  El

  ==============================================================================
*/

#include "RecordingThumbnail.h"

RecordingThumbnail::RecordingThumbnail()
{
	formatManager.registerBasicFormats();
	thumbnail.addChangeListener(this);
}

RecordingThumbnail::~RecordingThumbnail()
{
	thumbnail.removeChangeListener(this);
}

void RecordingThumbnail::setDisplayFullThumbnail(bool displayFull)
{
	displayFullThumb = displayFull;
	repaint();
}

void RecordingThumbnail::paint(Graphics& g)
{
	g.fillAll(Colours::darkgrey);
	g.setColour(Colours::lightgrey);

	if (thumbnail.getTotalLength() > 0.0)
	{
		auto endTime = displayFullThumb ? thumbnail.getTotalLength()
			: jmax(30.0, thumbnail.getTotalLength());

		auto thumbArea = getLocalBounds();
		thumbnail.drawChannels(g, thumbArea.reduced(2), 0.0, endTime, 1.0f);
	}
	else
	{
		g.setFont(14.0f);
		g.drawFittedText("(No file recorded)", getLocalBounds(), Justification::centred, 2);
	}
}

void RecordingThumbnail::changeListenerCallback(ChangeBroadcaster* source)
{
	if (source == &thumbnail)
		repaint();
}

AudioThumbnail& RecordingThumbnail::getAudioThumbnail()
{
	return thumbnail;
}
