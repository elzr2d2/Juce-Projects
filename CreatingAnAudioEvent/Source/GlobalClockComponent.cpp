/*
  ==============================================================================

    GlobalClockComponent.cpp
    Created: 8 Nov 2018 2:10:08pm
    Author:  El

  ==============================================================================
*/

#include "GlobalClockComponent.h"
#include <cstdint>



void main()
{
	GlobalClock gc;
	double i=0.0;

	while (i++>-1)
	{
		gc.Set(i);
	}
	
}
