#include "ChannelComponent.h"

class Event
{
public:
    static int event_Id;

    std::vector<int64_t> event_Position;

    Event()
    {
        event_Id++;

    }

    ~Event()
    {

    }
};

class Track
{
    static int track_Id;
    std::string track_Name = "null";

    Track()
    {
        track_Id++;
        track_Name = "track " + track_Id;
    }

    std::vector<Event> Events;
};

ChannelComponent::ChannelComponent()
{

    setSize(600, 100);

    //track Name
    trackName.setText("Track", NotificationType::dontSendNotification);
    trackName.setColour(TextEditor::ColourIds::outlineColourId, juce::Colours::greenyellow);
    trackName.setColour(TextEditor::ColourIds::backgroundColourId, juce::Colours::black);
    //solo Button
    soloButton.setButtonText("S");
    soloButton.setColour(TextButton::ColourIds::textColourOffId, juce::Colours::greenyellow);
    soloButton.setColour(TextButton::ColourIds::buttonColourId, juce::Colours::black);
    soloButton.addListener(this);
    //mute Button
    muteButton.setButtonText("M");
    muteButton.setColour(TextButton::ColourIds::textColourOffId, juce::Colours::greenyellow);
    muteButton.setColour(TextButton::ColourIds::buttonColourId, juce::Colours::black);
    muteButton.addListener(this);
    //volume Slider
    volume.setSliderStyle(Slider::SliderStyle::LinearHorizontal);
    volume.setRange(0, 10, 0);
    volume.setColour(Slider::ColourIds::rotarySliderFillColourId, juce::Colours::greenyellow);
    volume.setColour(Slider::ColourIds::textBoxTextColourId, juce::Colours::greenyellow);
    volume.setColour(Slider::ColourIds::textBoxOutlineColourId, juce::Colours::greenyellow);
    volume.setColour(Slider::ColourIds::textBoxBackgroundColourId, juce::Colours::black);
    volume.setColour(Slider::ColourIds::thumbColourId, juce::Colours::lawngreen);
    volume.setColour(Slider::ColourIds::trackColourId, juce::Colours::greenyellow);
    volume.setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    //file Button
    fileButton.setButtonText("+");
    fileButton.setColour(TextButton::ColourIds::textColourOffId, juce::Colours::greenyellow);
    fileButton.setColour(TextButton::ColourIds::buttonColourId, juce::Colours::black);
    fileButton.addListener(this);

    addAndMakeVisible(trackName);
    addAndMakeVisible(soloButton);
    addAndMakeVisible(muteButton);
    addAndMakeVisible(volume);
    addAndMakeVisible(fileButton);
}
ChannelComponent::~ChannelComponent()
{

}

void ChannelComponent::paint(Graphics& g)
{
    g.setColour(juce::Colours::greenyellow);
    g.drawRect(0, 0, 600, 100, 3);
    g.setColour(juce::Colours::black);
    g.fillRect(0, 0, 600, 100);

}
void ChannelComponent::resized()
{
    auto height = 30;
    auto width = 30;
    auto space = 10;
    auto x = 10;
    auto y = 40;
    trackName.setBounds(x, y, width * 4, height);
    soloButton.setBounds(x + 140, y, width, height);
    muteButton.setBounds(x + 180, y, width, height);
    fileButton.setBounds(x + 180 + width + space, y, width, height);
    volume.setBounds(x + 280, y, width * 3, height);

}

void ChannelComponent::buttonClicked(Button* button)
{

    if (button == &fileButton)
    {
        //choose a file
        FileChooser chooser("Choose a WAV of MP3 File", File::getSpecialLocation(File::userDesktopDirectory), "*.wav");
        //if the user choose a file
        if (chooser.browseForFileToOpen())
        {
            //what did the user choose?
            file = chooser.getResult();

            trackName.setText(file.getFileName(), false);
        }
    }

}