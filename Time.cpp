//
// Created by ahmad on 17/12/2018.
//

#include "Time.h"

Time::Time() : m_time(0) {}


size_t Time::get_time() {
    return m_time;
}

void Time::set_time(size_t new_time) {
    m_time = new_time;
}

size_t Time::now() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    return ms * 1000;
}

Time &Time::operator+=(unsigned long a) {
    m_time += a;
    return *this;
}

bool Time::operator<(Time const &other) {
    std::cout << "sadassdasdasdasdadad\n\n\n" << std::endl;
    return m_time < other.m_time;
}

