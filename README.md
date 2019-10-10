
# Scheduler

## this scheduler demo the job of the real scheduler, it runs tasks, each at a specific time (at a period from start time). When the scheduler finishes to run all tasks, it returns.

### The tasks implemented as the following interface:
struct ITask
{
   virtual void run() = 0;
   virtual unsigned long getNextRunPeriod() = 0; // in milliseconds
};
If getNextRunPeriod() returns value which is greater than zero, than it should be rescheduled for another period.

### classes implemeted:
class Scheduler {};
class Time {};

priority queue was used as a container in the Scheduler in order to keep tracking the taskes with the smallest time?
