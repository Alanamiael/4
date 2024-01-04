#pragma once
#include "Worker.h"

class Engineer : public Worker {
public:
    Engineer(char* name, int age, float salary, int experience, int vacationDays);
    Engineer();
    ~Engineer() override;

    void print();

    void setVacationDays(int vacationDays);
    int getVacationDays();

private:
    int vacationDays{};
};
