#include "Node.h"

Node::Node(Task* t) : task(t), next(nullptr) {}

Node::~Node() {
    delete task; 
}
