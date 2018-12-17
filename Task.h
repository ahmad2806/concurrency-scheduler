//
// Created by ahmad on 17/12/2018.
//

#ifndef SCHEDULER_TASK_H
#define SCHEDULER_TASK_H

#include "ITask.h"

class Task : public ITask {
public:
    Task();
    ~Task();
    void run();

    unsigned long getNextRunPeriod();

};


#endif //SCHEDULER_TASK_H
