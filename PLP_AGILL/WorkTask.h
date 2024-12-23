#ifndef WORKTASK_H
#define WORKTASK_H

#include "Task.h"

class WorkTask : public Task {
public:
    WorkTask(const std::string& desc, const std::string& due, int prio)
        : Task(desc, due, prio, TaskType::Work) {}

    void display() const override {
        std::cout << "[Work Task] ";
        Task::display();
    }
};

#endif // WORKTASK_H
