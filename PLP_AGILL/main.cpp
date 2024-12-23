#include "TaskManager.h"
#include "WorkTask.h"
#include "PersonalTask.h"
#include <iostream>
#include <string>

void displayMenu() {
    std::cout << "\n--- Task Manager ---\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. Display All Tasks\n";
    std::cout << "3. Display Work Tasks\n";
    std::cout << "4. Display Personal Tasks\n";
    std::cout << "5. Sort Tasks by Due Date\n";
    std::cout << "6. Sort Tasks by Priority\n";
    std::cout << "7. Remove Task\n";
    std::cout << "8. Exit\n";
    std::cout << "Select an option: ";
}

int main() {
    LinkedList taskList;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: { //    Add Task
                std::string description, dueDate;
                int priority, taskType;

                std::cin.ignore(); 
                std::cout << "Enter task description: ";
                std::getline(std::cin, description);

                std::cout << "Enter due date (YYYY-MM-DD): ";
                std::cin >> dueDate;

                std::cout << "Enter priority (1-10): ";
                std::cin >> priority;

                std::cout << "Enter task type (0 for Work, 1 for Personal): ";
                std::cin >> taskType;

                Task* task = (taskType == 0) 
                             ? static_cast<Task*>(new WorkTask(description, dueDate, priority))
                             : static_cast<Task*>(new PersonalTask(description, dueDate, priority));
                
                taskList.addTask(task);
                break;
            }
            case 2: { //  Display All Tasks
                taskList.displayAllTasks();
                break;
            }
            case 3: { // Display Work Tasks
                taskList.displaySpecificTasks(true);
                break;
            }
            case 4: { // Display Personal Tasks
                taskList.displaySpecificTasks(false);
                break;
            }
            case 5: { // Sort Tasks by Due Date
                taskList.sortByDueDate();
                std::cout << "Tasks sorted by due date.\n";
                break;
            }
            case 6: { // Sort Tasks by Priority
                taskList.sortByPriority();
                std::cout << "Tasks sorted by priority.\n";
                break;
            }
            case 7: { // Remove Task
                std::string description;
                std::cin.ignore(); 
                std::cout << "Enter the description of the task to remove: ";
                std::getline(std::cin, description);

                if (taskList.removeTask(description)) {
                    std::cout << "Task removed successfully.\n";
                } else {
                    std::cout << "Task not found.\n";
                }
                break;
            }
            case 8: { // Exit
                std::cout << "Exiting program.\n";
                break;
            }
            default: {
                std::cout << "Invalid option. Try again.\n";
            }
        }
    } while (choice != 8);

    return 0;
}
