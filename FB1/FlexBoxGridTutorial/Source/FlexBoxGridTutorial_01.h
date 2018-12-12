#pragma once

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent : public Component
{
public:
	//==============================================================================
	MainContentComponent()
		: rightPanel(Colours::darkslategrey),
		  leftPanel(Colours::darkslategrey)
	{
		addAndMakeVisible(rightPanel);
		addAndMakeVisible(leftPanel);
		addAndMakeVisible(mainPanel);

		setSize(600, 400);
	}

	~MainContentComponent() {}

	void paint(Graphics& g) override
	{
		g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	}

	void resized() override
	{
		auto bounds = getLocalBounds();

		auto panelWidth = bounds.getWidth() / 4;

		leftPanel.setBounds(bounds.removeFromLeft(panelWidth));
		rightPanel.setBounds(bounds.removeFromRight(panelWidth));

		mainPanel.setBounds(bounds);
	}

private:
	//==============================================================================
	struct RightSidePanel : public Component
	{
		RightSidePanel(Colour c) : backgroundColour(c)
		{
			for (int i = 0; i < 9; ++i)
				addAndMakeVisible(buttons.add(new TextButton(String(i))));
		}

		void paint(Graphics& g) override
		{
			g.fillAll(backgroundColour);
		}

		void resized() override
		{
			auto bounds = getLocalBounds();
			auto buttonSize = bounds.getWidth() / 3;

			for (int i = 0; i < buttons.size(); ++i)
			{
				buttons[i]->setBounds(buttonSize * (i % 3),
				                      buttonSize * (i / 3) + bounds.getHeight() / 3,
				                      buttonSize,
				                      buttonSize);
			}
		}

		Colour backgroundColour;
		OwnedArray<TextButton> buttons;
	};

	struct LeftSidePanel : public Component, public Button::Listener
	{
		LeftSidePanel(Colour c) : backgroundColour(c)
		{
			addbutton.setButtonText("+");
			addAndMakeVisible(addbutton);
			addbutton.addListener(this);

			removebutton.setButtonText("-");
			addAndMakeVisible(removebutton);
			removebutton.addListener(this);
		}

		void addNewSlider()
		{
			auto* slider = new Slider();

			slider->setSliderStyle(Slider::SliderStyle::Rotary);
			slider->setTextBoxStyle(Slider::NoTextBox, true, 0, 0);

			addAndMakeVisible(knobs.add(slider));
		}

		void removeSlider()
		{
			knobs.removeLast();
		}

		void buttonClicked(Button* button) override
		{
			if (button == &addbutton)
				addNewSlider();

			if (button == &removebutton)
				removeSlider();
			
			adjustKnobSize();

			repaint();
		}

		void paint(Graphics& g) override
		{
			g.fillAll(backgroundColour);
		}

		void adjustKnobSize() 
		{
			auto bounds = getLocalBounds();
			auto knobSize = bounds.getWidth() / 3;

			for (int i = 0; i < knobs.size(); ++i)
			{
				knobs[i]->setBounds(knobSize * (i % 3),
				                    bounds.getHeight() / 2 * (i / 3),
				                    knobSize,
				                    knobSize);
			}
		}

		void resized() override
		{
			auto bounds = getLocalBounds();
			adjustKnobSize();

			auto bottom = bounds.getBottom();

			addbutton.setBounds(10, bottom - 60, 50, 50);
			removebutton.setBounds(70, bottom - 60, 50, 50);
		}


		Colour backgroundColour;
		OwnedArray<Slider> knobs;
		TextButton addbutton;
		TextButton removebutton;
	};

	struct MainPanel : public Component
	{
		MainPanel()
		{
			for (int i = 0; i < 5; ++i)
			{
				addAndMakeVisible(sliders.add(new Slider()));
				sliders.getLast()->setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
			}
		}

		void paint(Graphics& g) override
		{
			g.fillAll(Colours::lightgrey);
		}

		void resized() override
		{
			auto bounds = getLocalBounds();

			auto sliderHeight = bounds.getHeight() / sliders.size();

			for (auto* slider : sliders)
			{
				slider->setSliderStyle(Slider::SliderStyle::LinearHorizontal);
				slider->setBounds(bounds.removeFromTop(sliderHeight));
			}
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
