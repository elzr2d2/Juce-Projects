#include "TimeCounter.h"

double TimeCounter::getSecondsPassed()
{
    auto samplePassedDouble = (double)samplesPassed;

    return samplePassedDouble / sampleRate;
}
