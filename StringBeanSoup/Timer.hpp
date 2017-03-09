//
//  Timer.hpp
//  StringBeanSoup
//
//  Created by Corbett, Grayson on 3/9/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <ctime>
#include <iostream>

using namespace std;

class Timer
{
private:
    long time;
    clock_t startTime;
    clock_t endTime;
    long ticks;
    bool running;
public:
    void startTimer();
    void resetTimer();
    void stopTimer();
    int getTime();
    Timer();
    
    clock_t GetTicks();
};

Timer :: Timer()
{
    time = 0;
    startTime = 0;
    endTime = 0;
    ticks = 0;
    clock = clock();
    running = false;
}

void Timer :: startTimer();
{
    if(running == false)
    {
    startTime = clock();
    }
}

void Timer :: stopTimer()
{
    if(running == true)
    {
        endTime = clock();
        time += endTime - startTime;
        time = time / CLOCKS_PER_SEC;
    }
}

void Timer :: resetTimer()
{
    time = 0;
    startTime = 0;
    endTime = 0;
    ticks = 0;
    running = false;
}

int Timer :: getTime()
{
    return time;
}


#endif /* Timer_hpp */
