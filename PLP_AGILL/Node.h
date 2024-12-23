#ifndef NODE_H
#define NODE_H

#include "Task.h"

class Node {
public:
    Task* task;
    Node* next;

    Node(Task* t) : task(t), next(nullptr) {}
    ~Node() { }
};

#endif // NODE_H
