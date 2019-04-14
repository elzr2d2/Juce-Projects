/*
  ==============================================================================

    EditViewState.cpp
    Created: 14 Apr 2019 9:34:59pm
    Author:  El

  ==============================================================================
*/

#include "EditViewState.h"
 EditViewState (te::Edit& e, te::SelectionManager& s)
        : edit (e), selectionManager (s)
    {
        state = edit.state.getOrCreateChildWithName (IDs::EDITVIEWSTATE, nullptr);
        
        auto um = &edit.getUndoManager();
        
        showGlobalTrack.referTo (state, IDs::showGlobalTrack, um, false);
        showMarkerTrack.referTo (state, IDs::showMarkerTrack, um, false);
        showChordTrack.referTo (state, IDs::showChordTrack, um, false);
        drawWaveforms.referTo (state, IDs::drawWaveforms, um, true);

        viewX1.referTo (state, IDs::viewX1, um, 0);
        viewX2.referTo (state, IDs::viewX2, um, 60);
        viewY.referTo (state, IDs::viewY, um, 0);
    }
    
    int timeToX (double time, int width) const
    {
        return roundToInt (((time - viewX1) * width) / (viewX2 - viewX1));
    }
    
    double xToTime (int x, int width) const
    {
        return (double (x) / width) * (viewX2 - viewX1) + viewX1;
    }