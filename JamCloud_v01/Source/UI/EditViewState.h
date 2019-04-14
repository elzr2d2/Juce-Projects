/*
  ==============================================================================

    EditViewState.h
    Created: 14 Apr 2019 9:34:59pm
    Author:  El

  ==============================================================================
*/

#pragma once
class EditViewState
{
public:
    EditViewState (te::Edit& e, te::SelectionManager& s);
    
    int timeToX (double time, int width) const;
  
    double xToTime (int x, int width) const;

    
    te::Edit& edit;
    te::SelectionManager& selectionManager;
    
    CachedValue<bool> showGlobalTrack, showMarkerTrack, showChordTrack, drawWaveforms;
    CachedValue<double> viewX1, viewX2, viewY;
    
    ValueTree state;
};