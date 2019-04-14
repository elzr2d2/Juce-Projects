
#pragma once

#include "JuceHeader.h"
#include "../Audio/AudioEngine.h"
//==============================================================================
class ThumbnailComponent : public Component,
						   private ChangeListener
{
public:
	ThumbnailComponent(AudioEngine& inEngine);
	//~ThumbnailComponent();

	void paint(Graphics& g) override;
	void setFile(const te::AudioFile& file);

	void ThumbnailComponent::mouseUp(const MouseEvent&) override;
	void ThumbnailComponent::mouseDrag(const MouseEvent& e) override;
	void ThumbnailComponent::mouseDown(const MouseEvent& e) override;

private:
	void ThumbnailComponent::updateCursorPosition();

	AudioEngine& audioEngine;
	DrawableRectangle cursor;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ThumbnailComponent)
};
