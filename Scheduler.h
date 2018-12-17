//
// Created by ahmad on 17/12/2018.
//
#include <iostream>

#include <utility> // std::pair, std::make_pair      // std::pair, std::make_pair
#include "Time.h"
#include "SharedPtr.h"
#include "ITask.h"

#ifndef SCHEDULER_SCHEDULER_H
#define SCHEDULER_SCHEDULER_H
typedef std::pair<Time, SharedPtr<ITask> > Task_Time;


class Scheduler {
public:
    Scheduler();

    ~Scheduler();

    void add(Task_Time &t);

    void remove(Task_Time &t);

    void run();

private:
    //prevent copying
    Scheduler(Scheduler const &);

    Scheduler &operator=(Scheduler const &);

    std::vector<Task_Time> tasks;

};


#endif //SCHEDULER_SCHEDULER_H
