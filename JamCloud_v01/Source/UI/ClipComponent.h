/*
  ==============================================================================

    ClipComponent.h
    Created: 14 Apr 2019 8:55:41pm
    Author:  El

  ==============================================================================
*/

#pragma once

class ClipComponent : public Component
{
public:
    ClipComponent (EditViewState&, te::Clip::Ptr);
    
    void paint (Graphics& g) override;
    void mouseDown (const MouseEvent& e) override;
    
    te::Clip& getClip() { return *clip; }
    
protected:
    EditViewState& editViewState;
    te::Clip::Ptr clip;
};