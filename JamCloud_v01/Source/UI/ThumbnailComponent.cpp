/*
  ==============================================================================

    ThumbnailComponent.cpp
    Created: 14 Apr 2019 1:07:56pm
    Author:  El

  ==============================================================================
*/

#include "ThumbnailComponent.h"

ThumbnailComponent::ThumbnailComponent(AudioEngine& inEngine) : audioEngine(inEngine)
{
	cursorUpdater.setCallback([this]
	{
		updateCursorPosition();

		if (smartThumbnail.isGeneratingProxy() || smartThumbnail.isOutOfDate())
			repaint();
	});
	cursor.setFill(findColour(Label::textColourId));
	addAndMakeVisible(cursor);
}

void ThumbnailComponent::setFile(const te::AudioFile & file)
{
	smartThumbnail.setNewFile(file);
	cursorUpdater.startTimerHz(25);
	repaint();
}

void ThumbnailComponent::paint(Graphics & g) override
{
	auto r = getLocalBounds();
	const auto colour = findColour(Label::textColourId);

	if (smartThumbnail.isGeneratingProxy())
	{
		g.setColour(colour.withMultipliedBrightness(0.9f));
		g.drawText("Creating proxy: " + String(roundToInt(smartThumbnail.getProxyProgress() * 100.0f)) + "%",
			r, Justification::centred);

	}
	else
	{
		const float brightness = smartThumbnail.isOutOfDate() ? 0.4f : 0.66f;
		g.setColour(colour.withMultipliedBrightness(brightness));
		smartThumbnail.drawChannels(g, r, true, { 0.0, smartThumbnail.getTotalLength() }, 1.0f);
	}
}

void ThumbnailComponent::mouseDown(const MouseEvent & e) override
{
	transport.setUserDragging(true);
	mouseDrag(e);
}

void ThumbnailComponent::mouseDrag(const MouseEvent & e) override
{
	jassert(getWidth() > 0);
	const float proportion = e.position.x / getWidth();
	transport.position = proportion * transport.getLoopRange().getLength();
}

void ThumbnailComponent::mouseUp(const MouseEvent&) override
{
	transport.setUserDragging(false);
}

void ThumbnailComponent::updateCursorPosition()
{
	const double loopLength = transport.getLoopRange().getLength();
	const double proportion = loopLength == 0.0 ? 0.0 : transport.getCurrentPosition() / loopLength;

	auto r = getLocalBounds().toFloat();
	const float x = r.getWidth() * float(proportion);
	cursor.setRectangle(r.withWidth(2.0f).withX(x));
}