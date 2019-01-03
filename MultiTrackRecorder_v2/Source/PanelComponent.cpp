

#include "PanelComponent.h"

PanelComponent::PanelComponent()
{
	
	setSize(getWidth(), getHeight());
}

PanelComponent::~PanelComponent()
{
}

void PanelComponent::paint(Graphics & g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));

	
}

void PanelComponent::resized()
{
	frame.setBounds(0,0, getWidth(),getHeight());
}


