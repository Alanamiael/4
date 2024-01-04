#pragma once
#include <string.h>

#include "Node.h"
#include "Personnel.h"

class Group : public TObject {
public:
    ~Group();

    void addObject(TObject *value);

    void removeObject(TObject *value);

    void iterate() const;

    int getCount();

    void print();

    class Iterator {
    public:
        Iterator(const Group &group, Node *node);

        const Node *operator*() const;

        Iterator &operator++();

        bool operator!=(const Iterator &other) const;
    private:
        const Group &group_;
        Node *current;
    };

    Iterator begin() const;

    Iterator end() const;

    Personnel *findPersonnel(const char* name);
private:
    Node *root = nullptr;
};
