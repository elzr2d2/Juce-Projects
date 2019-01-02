#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "TrackPanel.h"
#include "ToolBarPanel.h"
#include "TimelinePanel.h"
#include "BottomPanel.h"
class MainComponent   : public AudioAppComponent 
{
public:

    MainComponent();
    ~MainComponent();

    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;



    void paint (Graphics& g) override;
    void resized() override;

private:
	TrackPanel trackPanel;
	ToolBarPanel toolBarPanel;
	TimelinePanel timelinePanel;
	BottomPanel bottomPanel;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
