
#pragma once

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component
{
public:
    //==============================================================================
    MainContentComponent()
       #if ! JUCE_PROJUCER_LIVE_BUILD
        : rightPanel (Colours::lightgrey),
          leftPanel  (Colours::lightblue)
       #endif
    {
        addAndMakeVisible (rightPanel);
        addAndMakeVisible (leftPanel);
        addAndMakeVisible (mainPanel);

        setSize (600, 400);
    }

    ~MainContentComponent() {}

    void paint (Graphics& g) override
    {
        g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    }

    void resized() override
    {
        Grid grid;

        using Track = Grid::TrackInfo;

        grid.templateRows    = { Track (1_fr) };
        grid.templateColumns = { Track (1_fr), Track (2_fr), Track (1_fr) };

        grid.items = { GridItem (leftPanel), GridItem (mainPanel), GridItem (rightPanel) };

        grid.performLayout (getLocalBounds());
    }

private:
    //==============================================================================
    struct RightSidePanel    : public Component
    {
       #if JUCE_PROJUCER_LIVE_BUILD
        RightSidePanel() : backgroundColour (Colours::lightblue)
       #else
        RightSidePanel (Colour c) : backgroundColour (c)
       #endif
        {
            for (int i = 0; i < 10; ++i)
                addAndMakeVisible (buttons.add (new TextButton (String (i))));
        }

        void paint (Graphics& g) override
        {
            g.fillAll (backgroundColour);
        }

        void resized() override
        {
		FlexBox fb;
            fb.flexWrap = FlexBox::Wrap::wrap;
            fb.justifyContent = FlexBox::JustifyContent::center;
            fb.alignContent = FlexBox::AlignContent::center;

            for (auto* b : buttons)
                fb.items.add (FlexItem (*b).withMinWidth (50.0f).withMinHeight (50.0f));

            fb.performLayout (getLocalBounds().toFloat());
		
        }

        Colour backgroundColour;
        OwnedArray<TextButton> buttons;
    };

    struct LeftSidePanel    : public Component, public Button::Listener
    {
        LeftSidePanel()
        {
			
			addAndMakeVisible(addButton);
			addButton.setColour(TextButton::ColourIds::buttonColourId, Colours::red);
			addButton.addListener(this);

        }

		

        void paint (Graphics& g) override
        {
            g.fillAll (backgroundColour);

		
        }

        void resized() override
        {
            //==============================================================================
            FlexBox knobBox;
            knobBox.flexWrap = FlexBox::Wrap::wrap;
            knobBox.justifyContent = FlexBox::JustifyContent::spaceBetween;

            for (auto* k : knobs)
                knobBox.items.add (FlexItem (*k).withMinHeight (50.0f).withMinWidth (50.0f).withFlex (1));

            //==============================================================================
            FlexBox fb;
            fb.flexDirection = FlexBox::Direction::column;

            fb.items.add (FlexItem (knobBox).withFlex (2.5));

            fb.performLayout (getLocalBounds().toFloat());

			addButton.setBounds(getWidth() + 5, getHeight() + 5, 500, 500);

			
        }

		void LeftSidePanel::buttonClicked(Button* button) override
		{
			if (button == &addButton)
			{
				static int numOfBtn = 0;

				++numOfBtn;
				
				if (numOfBtn > 0)
				{
					for (int i = 0; i < numOfBtn; ++i)
					{
						auto* slider = new Slider();
						slider->setSliderStyle(Slider::SliderStyle::Rotary);
						slider->setTextBoxStyle(Slider::NoTextBox, true, 0, 0);

						addAndMakeVisible(knobs.add(slider));
					}
				}

			}
		}

		TextButton addButton{ "+" };

        Colour backgroundColour;
        OwnedArray<Slider> knobs;
    };



    struct MainPanel    : public Component
    {
        MainPanel()
        {
            for (int i = 0; i < 5; ++i)
            {
                addAndMakeVisible (sliders.add (new Slider()));
                sliders.getLast()->setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
            }
        }

        void paint (Graphics& g) override
        {
            g.fillAll (Colours::hotpink);
        }

        void resized() override
        {
            auto isPortrait = getLocalBounds().getHeight() > getLocalBounds().getWidth();

            FlexBox fb;
            fb.flexDirection = isPortrait ? FlexBox::Direction::column
                                          : FlexBox::Direction::row;

            for (auto* s : sliders)
            {
                s->setSliderStyle (isPortrait ? Slider::SliderStyle::LinearHorizontal
                                              : Slider::SliderStyle::LinearVertical);

                fb.items.add (FlexItem (*s).withFlex (0, 1, isPortrait ? getHeight() / 5.0f
                                                                       : getWidth()  / 5.0f));
            }

            fb.performLayout (getLocalBounds().toFloat());
        }

        OwnedArray<Slider> sliders;
    };

    //==============================================================================
    RightSidePanel rightPanel;
    LeftSidePanel leftPanel;
    MainPanel mainPanel;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};
