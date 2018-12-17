//
// Created by ahmad on 17/12/2018.
//

#ifndef SCHEDULER_TIME_H
#define SCHEDULER_TIME_H


class Time {

public:
    Time();
    ~Time();

    Time(Time const&);
    Time& operator=(Time const & a);


    bool operator>(Time const & a);

private:

};


#endif //SCHEDULER_TIME_H
