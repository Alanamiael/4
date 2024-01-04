#pragma once
#include "Personnel.h"
#include "TObject.h"

class Event : public TObject {
public:
    virtual void print() {
    }

    Personnel *personnel;
    int size;
};
