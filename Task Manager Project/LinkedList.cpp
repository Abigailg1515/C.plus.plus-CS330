#include "LinkedList.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "PersonalTask.h"
#include "WorkTask.h"
#include "Node.h"
#include "Task.h"

// Destructor
LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp; 
    }
    head = tail = nullptr;
}

// Add Task
void LinkedList::addTask(Task* task) {
    if (!task) {
        std::cerr << "Error: Cannot add a null task to the list.\n";
        return;
    }

    Node* newNode = new Node(task);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
  //  std::cout << "Task added: " << task->getDescription() << "\n";
}

// Display All Tasks
void LinkedList::displayAllTasks() const {
    if (!head) {
        std::cout << "No tasks to display.\n";
        return;
    }

    Node* current = head;
    std::cout << "Displaying all tasks:\n";
    while (current) {
        if (current->task) {
            current->task->display();
        }
        current = current->next;
    }
}

// Sort Tasks by Priority
void LinkedList::sortByPriority() {
    std::vector<Task*> tasks;
    Node* current = head;

    while (current) {
        if (current->task) {
            tasks.push_back(current->task);
        }
        current = current->next;
    }

    std::cout << "Before sorting by priority:\n";
    for (const auto& task : tasks) {
        std::cout << task->getDescription() << " - Priority: " << task->getPriority() << "\n";
    }

    std::sort(tasks.begin(), tasks.end(), [](Task* a, Task* b) {
        return a->getPriority() > b->getPriority();
    });

    std::cout << "After sorting by priority:\n";
    for (const auto& task : tasks) {
        std::cout << task->getDescription() << " - Priority: " << task->getPriority() << "\n";
    }

    rebuildList(tasks);
}

// Sort Tasks by Due Date
void LinkedList::sortByDueDate() {
    std::vector<Task*> tasks;
    Node* current = head;

    while (current) {
        if (current->task) {
            tasks.push_back(current->task);
        }
        current = current->next;
    }

    std::cout << "Before sorting by due date:\n";
    for (const auto& task : tasks) {
        std::cout << task->getDescription() << " - Due Date: " << task->getDueDate() << "\n";
    }

    std::sort(tasks.begin(), tasks.end(), [](Task* a, Task* b) {
        return a->getDueDate() < b->getDueDate();
    });

    std::cout << "After sorting by due date:\n";
    for (const auto& task : tasks) {
        std::cout << task->getDescription() << " - Due Date: " << task->getDueDate() << "\n";
    }

    rebuildList(tasks);
}

// Rebuild List
void LinkedList::rebuildList(const std::vector<Task*>& tasks) {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp; 
    }
    head = tail = nullptr;

    std::cout << "Rebuilding list with sorted tasks:\n";
    for (Task* task : tasks) {
        if (task) {
            addTask(task);
       // << "Readded Task: " << task->getDescription() << "\n";
        }
    }
}

// Display Tasks by Type
void LinkedList::displayTasks(TaskType type) const {
    if (!head) {
        std::cout << "No tasks to display.\n";
        return;
    }

    Node* current = head;
    bool found = false;

    while (current) {
        if (current->task) { 
            if (type == TaskType::Work || current->task->getType() == type) {
                current->task->display();
                found = true;
            }
        }
        current = current->next;
    }

    if (!found) {
        std::cout << "No tasks of the requested type found.\n";
    }
}

// Display Specific Tasks
void LinkedList::displaySpecificTasks(bool isWorkTask) const {
    Node* current = head;
    bool found = false;

    std::cout << (isWorkTask ? "Displaying Work Tasks:\n" : "Displaying Personal Tasks:\n");
    while (current) {
        if (current->task) {
            if ((isWorkTask && dynamic_cast<WorkTask*>(current->task)) ||
                (!isWorkTask && dynamic_cast<PersonalTask*>(current->task))) {
                current->task->display();
                found = true;
            }
        }
        current = current->next;
    }

    if (!found) {
        std::cout << "No tasks found.\n";
    }
}

// Remove Task
bool LinkedList::removeTask(const std::string& description) {
    Node* current = head;
    Node* previous = nullptr;

    while (current) {
        if (current->task && current->task->getDescription() == description) {
            if (previous) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            if (current == tail) {
                tail = previous;
            }
            delete current; // Clean up memory
         //   std::cout << "Task removed: " << description << "\n";
            return true;
        }
        previous = current;
        current = current->next;
    }

    std::cout << "Task not found: " << description << "\n";
    return false;
}
