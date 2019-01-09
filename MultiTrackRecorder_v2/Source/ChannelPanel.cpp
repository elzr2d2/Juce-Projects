/*
  ==============================================================================

    ChannelPanel.cpp
    Created: 9 Jan 2019 1:50:43pm
    Author:  El

  ==============================================================================
*/

#include "ChannelPanel.h"

ChannelPanel::ChannelPanel()
  {
	addChannelButton.onClick = [this] { addChannelButtonClicked(); };

	addAndMakeVisible(addChannelButton);
	

	setSize(360, getHeight());
  }

  ChannelPanel::~ChannelPanel()
  {
  }

  void ChannelPanel::paint(Graphics & g)
  {
	  
  }

  void ChannelPanel::resized()
  {

  }

  void ChannelPanel::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
  {
  }

  void ChannelPanel::getNextAudioBlock(const AudioSourceChannelInfo & bufferToFill)
  {
  }

  void ChannelPanel::releaseResources()
  {
  }

  void ChannelPanel::addChannelButtonClicked()
  {
	  channels.push_back(newChannel);
	  
  }
