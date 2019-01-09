/*
  ==============================================================================

    ControlBar.cpp
    Created: 8 Jan 2019 8:15:42pm
    Author:  El

  ==============================================================================
*/

#include "ControlBar.h"
#define CHANNEL_WIDTH 200
#define CHANNEL_HEIGHT 200

ControlBar::ControlBar()
  {

	playPauseButton.onClick = [this] { playPauseButtonClicked(); };
	stopButton.onClick = [this] { stopButtonClicked(); };
	recordButton.onClick = [this] { recordButtonClicked(); };

	addAndMakeVisible(playPauseButton);
	addAndMakeVisible(stopButton);
	addAndMakeVisible(recordButton);


	setSize(CHANNEL_WIDTH, CHANNEL_HEIGHT);
	setAudioChannels(2, 2);
  }

  ControlBar::~ControlBar()
  {
  }

  
  void ControlBar::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
  {
  }

  void ControlBar::getNextAudioBlock(const AudioSourceChannelInfo & bufferToFill)
  {
	  bufferToFill.clearActiveBufferRegion();
  }

  void ControlBar::releaseResources()
  {
  }



  void ControlBar::paint(Graphics & g)
  {
	  g.fillAll(Colours::slategrey);
  }

  void ControlBar::resized()
  {
	  stopButton.setBounds((getWidth()/2)-60,0,60,30);
	  playPauseButton.setBounds(stopButton.getWidth() + 61, 0, 60, 30);
	  recordButton.setBounds(playPauseButton.getWidth() + 61, 0, 60, 30);
  }

  void ControlBar::playPauseButtonClicked()
  {
	  transportStateChanged(Starting);
  }

  void ControlBar::stopButtonClicked()
  {
	  transportStateChanged(Stopping);
  }

  void ControlBar::recordButtonClicked()
  {
	  transportStateChanged(Recording);
  }

 void ControlBar::changeListenerCallback(ChangeBroadcaster *source)
  {
	  if (source == &transport)
	  {
		  if (transport.isPlaying())
		  {
			  transportStateChanged(Playing);
		  }
		  else
		  {
			  transportStateChanged(Stopped);
		  }
	  }
  }

  void ControlBar::transportStateChanged(TransportState newState)
  {
	  if (newState != state)
	  {
		  state = newState;

		  switch (state) {
		  case Stopped:
			  playPauseButton.setEnabled(true);
			  recordButton.setEnabled(true);
			  transport.setPosition(0.0);
			  break;

		  case Playing:
			  playPauseButton.setButtonText("||");
			  recordButton.setEnabled(true);
			  break;

		  case Starting:
			  stopButton.setEnabled(true);
			  playPauseButton.setButtonText("||");
			  recordButton.setEnabled(true);
			  transport.start();
			  break;

		  case Stopping:
			  playPauseButton.setButtonText(">");
			  stopButton.setEnabled(false);
			  recordButton.setEnabled(true);
			  transport.stop();
			  
			  break;
		  case Recording:
			  recordButton.setEnabled(false);
			  
			  break;
		  }
	  }
  }
