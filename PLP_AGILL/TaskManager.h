#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "LinkedList.h"

class TaskManager {
private:
    LinkedList tasks;

public:
    void addTask(Task* task);
    void displayTasks(TaskType type = TaskType::Work) const;
    void displaySpecificTasks(bool isWorkTask) const;
    void sortTasksByDueDate();
    void sortTasksByPriority();
    void removeTask(const std::string& description);
};

#endif // TASKMANAGER_H
