#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

enum class TaskType { Work, Personal };

class Task {
protected:
    std::string description;
    std::string dueDate;
    int priority;
    TaskType type;

public:
    Task(const std::string& desc, const std::string& due, int prio, TaskType t)
        : description(desc), dueDate(due), priority(prio), type(t) {}

    virtual ~Task() = default;

    std::string getDescription() const { return description; }
    std::string getDueDate() const { return dueDate; }
    int getPriority() const { return priority; }
    TaskType getType() const { return type; }

    virtual void display() const {
        std::cout << "Description: " << description
                  << ", Due Date: " << dueDate
                  << ", Priority: " << priority
                  << ", Type: " << (type == TaskType::Work ? "Work" : "Personal") << "\n";
    }
};

#endif // TASK_H
