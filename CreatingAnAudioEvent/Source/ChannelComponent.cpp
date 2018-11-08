/*
  ==============================================================================

    ChannelComponent.cpp
    Created: 8 Nov 2018 2:07:33pm
    Author:  El

  ==============================================================================
*/

#include "ChannelComponent.h"

class Event
{

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
	int track_Id=0;
	std::string track_Name="track "+track_Id;

	std::vector<Event> Events;
};

