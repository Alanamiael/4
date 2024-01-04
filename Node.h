#pragma once
#include "TObject.h"

class Node {
public:
    Node(TObject* value);
    ~Node();
    Node* getNext();
    void setNext(Node* node);

    TObject* value;
    Node* next;
};
