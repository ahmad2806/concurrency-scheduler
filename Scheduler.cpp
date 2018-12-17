//
// Created by ahmad on 17/12/2018.
//

#include "Scheduler.h"

Scheduler::Scheduler() {
    std::make_heap(tasks.begin(), tasks.end());
}


void Scheduler::add(const SharedPtr<Task> task) {
    Time *time = new (Time);
    time->set_time((-1 * task.get()->getNextRunPeriod()) - time->now());

    Task_Time t = std::make_pair(time, task);
    tasks.push_back(t);
    std::push_heap(tasks.begin(), tasks.end());
}


Scheduler::~Scheduler() {
    unsigned i;
    for (i = 0; i < tasks.size(); i++)
        delete (std::get<0>(tasks[i]));
}

bool operator<(const Task_Time &lhs, const Task_Time &rhs) {
    return true;
}

void Scheduler::run() {
    Time *t0 = new Time;
    while (tasks.size() > 0) {
        Task_Time current_task = tasks.front();
        unsigned long delta = (current_task.first->get_time() * -1) - t0->now();
        if (delta > 0)
            usleep(delta);
        std::pop_heap(tasks.begin(), tasks.end());
        tasks.pop_back();
        current_task.second.get()->run();
        // here i send the task to add function and destroy the time no matter what
        // ! because in add new one will be created
        if (current_task.second.get()->getNextRunPeriod() > 0)
            add(current_task.second);

        remove(current_task);
    }
    delete t0;
}

void Scheduler::remove(Task_Time &t) {
    delete t.first;
}
