//
// Created by ahmad on 17/12/2018.
//

#ifndef SCHEDULER_ITASK_H
#define SCHEDULER_ITASK_H


class ITask {
public:
    virtual void run()= 0;
    virtual unsigned long getNextRunPeriod()= 0;
    virtual ~ITask()= 0;

};


#endif //SCHEDULER_ITASK_H
