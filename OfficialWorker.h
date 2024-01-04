#pragma once
#include "Worker.h"

class OfficialWorker : public Worker {
public:
    OfficialWorker(char* name, int age, float salary, int experience, int sickLeaveDays);
    OfficialWorker();
    ~OfficialWorker();

    void print();

    void setSickLeaveDays(int sickLeaveDays);

    int getsickLeaveDays();

    int getSickLeaveDays() const;

private:
    int sickLeaveDays;
};
