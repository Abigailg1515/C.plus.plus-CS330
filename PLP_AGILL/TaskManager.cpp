#include "TaskManager.h"

void TaskManager::addTask(Task* task) {
    tasks.addTask(task);
}

void TaskManager::displayTasks(TaskType type) const {
    tasks.displayTasks(type);
}

void TaskManager::displaySpecificTasks(bool isWorkTask) const {
    tasks.displaySpecificTasks(isWorkTask);
}

void TaskManager::sortTasksByDueDate() {
    tasks.sortByDueDate();
}

void TaskManager::sortTasksByPriority() {
    tasks.sortByPriority();
}

void TaskManager::removeTask(const std::string& description) {
    if (!tasks.removeTask(description)) {
        std::cout << "Task not found!\n";
    }
}
