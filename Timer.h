//
// Created by kevin on 09/07/19.
//

#ifndef ELABORATOTIMER_TIMER_H
#define ELABORATOTIMER_TIMER_H

#include <chrono>
#include <exception>

using namespace std;
using namespace std::chrono;

class Timer {
public:
    Timer();

    const time_point<steady_clock> &getStart() const;

    int getDuration() const;

    bool setDuration(const unsigned int seconds);

    bool isRunning() const;

    bool startTimer();
    bool stopTimer();
    void resetTimer();

private:
    time_point<steady_clock> start;
    ::duration<int, milli> duration;
    bool running;
};


#endif //ELABORATOTIMER_TIMER_H