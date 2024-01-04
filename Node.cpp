#include "Node.h"

Node::~Node() {
    delete this->value;
}

Node::Node(TObject *value) {
    this->value = value;
    this->next = nullptr;
}

Node *Node::getNext() {
    return this->next;
}

void Node::setNext(Node *node) {
    this->next = node;
}
