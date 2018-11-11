/*
  ==============================================================================

    GlobalClockComponent.h
    Created: 8 Nov 2018 2:10:08pm
    Author:  El

  ==============================================================================
*/

#pragma once

class GlobalClock
{
public:

	double Get()
	{
		return seconds;
	}

	void Set(double &Seconds)
	{
		seconds = Seconds;
	}

private:
	double seconds=0;

};