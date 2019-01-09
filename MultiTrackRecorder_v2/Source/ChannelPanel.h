#pragma once

#include "../JuceHeader.h"
#include "JOELEngine.h"
#include "ChannelComponent.h"
class ChannelPanel : public AudioAppComponent, public ChangeListener
{
public:

	ChannelPanel();
	~ChannelPanel();

	void paint(Graphics& g) override;
	void resized() override;

	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;

private:

	void addChannelButtonClicked();

	ChannelComponent newChannel;
	std::vector<ChannelComponent> channels;
	std::vector<ChannelComponent>::iterator it;

	TextButton addChannelButton{"+"};
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ChannelPanel)
};