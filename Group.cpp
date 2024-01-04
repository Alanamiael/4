// Group.cpp
#include "Group.h"

Group::~Group() {
    for (Iterator it = begin(); it != end(); ++it) {
        const Node *current = *it;
        delete current;
    }
}

void Group::addObject(TObject *value) {
    Node *object = new Node(value);
    if (!this->root) {
        this->root = object;
    } else {
        Node *current = this->root;
        while (current->getNext()) {
            current = current->getNext();
        }
        current->setNext(object);
    }
}

void Group::removeObject(TObject *value) {
    // Remove the object from the linked list
    Node *current = this->root;
    Node *previous = nullptr;
    while (current) {
        if (current->value == value) {
            if (previous) {
                previous->setNext(current->getNext());
                delete current;
            } else {
                root->setNext(current->getNext());
                delete current;
            }
            return; // Assuming there's only one occurrence of the object in the list
        }
        previous = current;
        current = current->getNext();
    }
}

Group::Iterator::Iterator(const Group &group, Node *node)
    : group_(group), current(node) {
}

Group::Iterator Group::begin() const {
    return Iterator(*this, this->root);
}

Group::Iterator Group::end() const {
    return Iterator(*this, nullptr);
}

Personnel* Group::findPersonnel(const char *name) {
    for (Iterator it = begin(); it != end(); ++it) {
        const Node *current = *it;
        if (current) {
            if (strcmp(((Personnel*)current->value)->getName(), name) == 0) {
                return (Personnel*)current->value;
            }
        }
    }
    return nullptr;
}

void Group::iterate() const {
    for (Iterator it = begin(); it != end(); ++it) {
        const Node *current = *it;
        if (current) {
            current->value->print();
        }
    }
}

int Group::getCount() {
    // Return the count of objects in the linked list
    int count = 0;
    Node *current = this->root;
    while (current) {
        ++count;
        current = current->getNext();
    }
    return count;
}

void Group::print() {
    for (Iterator it = begin(); it != end(); ++it) {
        const Node *current = *it;
        if (current) {
            current->value->print();
        }
    }
}

const Node *Group::Iterator::operator*() const {
    return this->current;
}

Group::Iterator &Group::Iterator::operator++() {
    if (current) {
        current = current->getNext();
    }
    return *this;
}

bool Group::Iterator::operator!=(const Iterator &other) const {
    return this->current != other.current;
}
