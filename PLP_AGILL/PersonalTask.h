#ifndef PERSONALTASK_H
#define PERSONALTASK_H

#include "Task.h"

class PersonalTask : public Task {
public:
    PersonalTask(const std::string& desc, const std::string& due, int prio)
        : Task(desc, due, prio, TaskType::Personal) {}

    void display() const override {
        std::cout << "[Personal Task] ";
        Task::display();
    }
};

#endif // PERSONALTASK_H
