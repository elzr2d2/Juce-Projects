/*
  ==============================================================================

    RecordingThumbnail.cpp
    Created: 26 Dec 2018 2:11:33pm
    Author:  El

  ==============================================================================
*/

#include "RecordingThumbnail.h"

RecordingThumbnail()
{
	formatManager.registerBasicFormats();
	thumbnail.addChangeListener(this);
}

~RecordingThumbnail()
{
	thumbnail.removeChangeListener(this);
}

AudioThumbnail& getAudioThumbnail() { return thumbnail; }

void setDisplayFullThumbnail(bool displayFull)
{
	displayFullThumb = displayFull;
	repaint();
}

void paint(Graphics& g) override
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

void changeListenerCallback(ChangeBroadcaster* source)
{
	if (source == &thumbnail)
		repaint();
}