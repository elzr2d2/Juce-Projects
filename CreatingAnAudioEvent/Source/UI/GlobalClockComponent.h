#pragma once

class GlobalClock
{
public:

    double Get()
    {
        return seconds;
    }

    void Set(double& Seconds)
    {
        seconds = Seconds;
    }

private:
    double seconds = 0;

};