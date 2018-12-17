//
// Created by ahmad on 17/12/2018.
//

#ifndef SCHEDULER_TIME_H
#define SCHEDULER_TIME_H

#include <ctime>
#include <iostream>

class Time {

public:
    Time();

    static size_t now();

    size_t get_time();
    void set_time(size_t new_time);
    Time &operator+=(unsigned long a);
    bool operator<(Time const &a);

private:
    unsigned long m_time;
};


#endif //SCHEDULER_TIME_H
