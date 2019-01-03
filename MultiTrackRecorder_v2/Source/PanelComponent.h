#pragma once

#include "JuceHeader.h"
#include "TracktionDemoUtilities.h"




class PanelComponent : public Component
{
public:
	PanelComponent();
	~PanelComponent();

	void paint(Graphics& g) override;
	void resized() override;

private:

	Rectangle <int>frame;


	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PanelComponent)
};
