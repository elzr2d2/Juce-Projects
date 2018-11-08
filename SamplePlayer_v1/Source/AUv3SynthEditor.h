#pragma once
#include "../examples/Assets/DemoUtilities.h"

//==============================================================================
class AUv3SynthEditor   : public AudioProcessorEditor,
                          private Timer
{
public:
    //==============================================================================
    AUv3SynthEditor (AudioProcessor& processor)
        :   AudioProcessorEditor (processor),
            roomSizeSlider (Slider::LinearHorizontal, Slider::NoTextBox)
    {
        LookAndFeel::setDefaultLookAndFeel (&materialLookAndFeel);

        roomSizeSlider.setValue (getParameterValue ("roomSize"), NotificationType::dontSendNotification);

        recordButton.onClick = [this] { startRecording(); };
        addAndMakeVisible (recordButton);

        roomSizeSlider.onValueChange = [this] { setParameterValue ("roomSize", roomSizeSlider.getValue()); };
        roomSizeSlider.setRange (0.0, 1.0);
        addAndMakeVisible (roomSizeSlider);

        if (auto* assetStream = createAssetInputStream ("proaudio.path"))
        {
            std::unique_ptr<InputStream> fileStream (assetStream);

            Path proAudioPath;
            proAudioPath.loadPathFromStream (*fileStream);
            proAudioIcon.setPath (proAudioPath);
            addAndMakeVisible (proAudioIcon);

            auto proAudioIconColour = findColour (TextButton::buttonOnColourId);
            proAudioIcon.setFill (FillType (proAudioIconColour));
        }

        setSize (600, 400);
        startTimer (100);
    }



    //==============================================================================
    void paint (Graphics& g) override
    {
        g.fillAll (findColour (ResizableWindow::backgroundColourId));
    }

    void resized() override
    {
        auto r = getLocalBounds();

        auto guiElementAreaHeight = r.getHeight() / 3;

        proAudioIcon.setTransformToFit (r.removeFromLeft (proportionOfWidth (0.25))
                                         .withSizeKeepingCentre (guiElementAreaHeight, guiElementAreaHeight)
                                         .toFloat(),
                                        RectanglePlacement::fillDestination);

        auto margin = guiElementAreaHeight / 4;
        r.reduce (margin, margin);

        auto buttonHeight = guiElementAreaHeight - margin;

        recordButton  .setBounds (r.removeFromTop (guiElementAreaHeight).withSizeKeepingCentre (r.getWidth(), buttonHeight));
        roomSizeSlider.setBounds (r.removeFromTop (guiElementAreaHeight).withSizeKeepingCentre (r.getWidth(), buttonHeight));
    }

    //==============================================================================
    void startRecording()
    {
        recordButton.setEnabled (false);
        setParameterValue ("isRecording", 1.0f);
    }

private:
    //==============================================================================
    void timerCallback() override
    {
        auto isRecordingNow = (getParameterValue ("isRecording") >= 0.5f);

        recordButton.setEnabled (! isRecordingNow);
        roomSizeSlider.setValue (getParameterValue ("roomSize"), NotificationType::dontSendNotification);
    }

    //==============================================================================
    AudioProcessorParameter* getParameter (const String& paramId)
    {
        if (auto* processor = getAudioProcessor())
        {
            const OwnedArray<AudioProcessorParameter>& params = processor->getParameters();

            for (auto p : params)
            {
                if (auto* param = dynamic_cast<AudioProcessorParameterWithID*> (p))
                {
                    if (param->paramID == paramId)
                        return param;
                }
            }
        }

        return nullptr;
    }

    //==============================================================================
    float getParameterValue (const String& paramId)
    {
        if (auto* param = getParameter (paramId))
            return param->getValue();

        return 0.0f;
    }

    void setParameterValue (const String& paramId, float value)
    {
        if (auto* param = getParameter (paramId))
            param->setValueNotifyingHost (value);
    }

    //==============================================================================
    MaterialLookAndFeel materialLookAndFeel;

    //==============================================================================
    TextButton recordButton { "Record" };
	/*
	TextButton playButton{"Play"};
	TextButton stopButton{"Stop"};
	
	*/


    Slider roomSizeSlider;
    DrawablePath proAudioIcon;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AUv3SynthEditor)
};
