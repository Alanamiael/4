#pragma once
#include "Personnel.h"

class Worker : public Personnel {
public:
    Worker(char* name, int age, float salary, int experience);
    Worker();
    ~Worker();

    void print();

    int getExperience();
    void setExperience(int experience);
protected:
    int experience;
};
