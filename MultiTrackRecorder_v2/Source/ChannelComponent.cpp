
#include "ChannelComponent.h"
#include "TracktionDemoUtilities.h"
#define CHANNEL_WIDTH 360
#define CHANNEL_HEIGHT 100
#define VOL_MAX 100
#define VOL_MIN 0
#define PAN_MAX 100
#define PAN_MIN -100

ChannelComponent::ChannelComponent()
  {

	name.setText("", true);

	vol_Slider.setRange(VOL_MIN, VOL_MAX);
	vol_Slider.setSliderStyle(Slider::SliderStyle::Rotary);
	vol_Slider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	vol_Slider.setValue(VOL_MAX/2, juce::dontSendNotification);

	pan_Slider.setRange(PAN_MIN, PAN_MAX);
	pan_Slider.setSliderStyle(Slider::SliderStyle::Rotary);
	pan_Slider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	pan_Slider.setValue(0, juce::dontSendNotification);

	soloButton.onClick = [this] { ChannelComponent::soloButtonClicked(); };
	muteButton.onClick = [this] { ChannelComponent::muteButtonClicked(); };
	fileButton.onClick = [this] { ChannelComponent::fileButtonClicked(); };

	
	addAndMakeVisible(name);
	addAndMakeVisible(vol_Slider);
	addAndMakeVisible(pan_Slider);
	addAndMakeVisible(soloButton);
	addAndMakeVisible(muteButton);
	addAndMakeVisible(fileButton);


	setSize(CHANNEL_WIDTH, CHANNEL_HEIGHT);
	setAudioChannels(2, 2);
  }

ChannelComponent::~ChannelComponent()
{
	shutdownAudio();
}

void ChannelComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{

}

void ChannelComponent::getNextAudioBlock(const AudioSourceChannelInfo & bufferToFill)
{
	bufferToFill.clearActiveBufferRegion();
}

void ChannelComponent::releaseResources()
{
}

void ChannelComponent::removeButtonClicked()
{
}

void ChannelComponent::soloButtonClicked()
{
	je.initTransport();
}

void ChannelComponent::muteButtonClicked()
{
}

void ChannelComponent::fileButtonClicked()
{
	FileChooser fileChooser("Choose WAV File",
		File::getSpecialLocation(File::userDesktopDirectory), "* wav", true, false);
	if (fileChooser.browseForFileToOpen())
	{
		file = fileChooser.getResult();
		name.setText(file.getFileName());
		je.addChannel(file);
	}

}

File ChannelComponent::getFile()
{
	return file;
}

void ChannelComponent::paint(Graphics & g)
{
	g.fillAll(Colours::black);
}

void ChannelComponent::resized()
{
	int height = 30;
	int y = getHeight() / 3 , nameX = 10;
	int buttonSize = 30;
	int border=10;
	int soloButtonX = 30;
	int nameWidth = 100;
	int sliderSize = 50;

	name.setBounds(border, y, nameWidth, height);
	soloButton.setBounds(name.getWidth()+border*2, y, buttonSize, buttonSize);
	muteButton.setBounds(name.getWidth()+soloButton.getWidth()+border*3, y, buttonSize, buttonSize);
	fileButton.setBounds(name.getWidth() + soloButton.getWidth() * 2 + border * 4, y, buttonSize, buttonSize);
	vol_Slider.setBounds(name.getWidth() + soloButton.getWidth() * 3 + border * 5, y-10, sliderSize, sliderSize);
	pan_Slider.setBounds(name.getWidth() + soloButton.getWidth() * 4 + border * 6, y-10, sliderSize, sliderSize);
}


