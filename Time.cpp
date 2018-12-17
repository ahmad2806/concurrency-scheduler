//
// Created by ahmad on 17/12/2018.
//

#include "Time.h"
Time::Time() {}


size_t Time::get_time() {
    return m_time;
}

void Time::set_time(size_t new_time) {
    m_time = new_time;
}

size_t Time::now() {
    return 10;
}

Time& Time::operator+=(unsigned long a) {
    m_time += a;
    return *this;
}

bool Time::operator<(Time const &a) { return m_time > a.m_time;}

