//
// Created by ahmad on 17/12/2018.
//

#ifndef SCHEDULER_TASK_H
#define SCHEDULER_TASK_H

#include "ITask.h"
#include <iostream>
#include <unistd.h>
class Task : public ITask {
public:
    Task(const char* name, useconds_t time, int cycle, const char* msg);
    ~Task();
    void run();

    unsigned long getNextRunPeriod();

private:
    const char* m_name;
    const char* m_msg;
    int m_counter;
    int m_cycles;
    useconds_t m_time_iter;
};


#endif //SCHEDULER_TASK_H
