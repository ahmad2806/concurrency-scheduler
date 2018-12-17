//
// Created by ahmad on 17/12/2018.
//

#include "Scheduler.h"

Scheduler::Scheduler() {
    std::make_heap(tasks.begin(), tasks.end());
}


void Scheduler::add(const SharedPtr<Task> task) {
    Time *time = new (Time);
    time->set_time(task.get()->getNextRunPeriod() + time->now());

    Task_Time t = std::make_pair(time, task);
    tasks.push_back(t);
    std::push_heap(tasks.begin(), tasks.end());
}


Scheduler::~Scheduler() {
    unsigned i;
    for(i = 0 ; i < tasks.size() ; i++)
        delete(std::get<0>(tasks[i]));
}

bool operator<(const Task_Time &lhs, const Task_Time &rhs) {
    return true;
}