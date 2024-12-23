#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>
#include <vector>

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    ~LinkedList();

    void addTask(Task* task);
    void displayAllTasks() const;
    void displayTasks(TaskType type) const;
    void displaySpecificTasks(bool isWorkTask) const; 
    bool removeTask(const std::string& description);  
    void sortByDueDate();
    void sortByPriority();
    void rebuildList(const std::vector<Task*>& tasks);
};

#endif // LINKEDLIST_H
