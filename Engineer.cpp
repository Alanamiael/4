#include "Engineer.h"
#include <cstdio>

void Engineer::print() {
    printf_s("Name: %s; Age: %d; Salary: %f dollars; Experience: %d years; Vacation days: %ddays\n", this->name, this->age, this->salary, this->experience, this->vacationDays);
}

Engineer::Engineer(char *name, int age, float salary, int experience, int vacationDays) {
    printf("Engineer constructor with arguments.\n");
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
    this->setExperience(experience);
    this->setVacationDays(vacationDays);
}

Engineer::Engineer() {
    char name[] = "Unknown";
    this->setName(name);
    this->setAge(0);
    this->setSalary(0);
    this->setExperience(0);
    this->setVacationDays(0);
}

Engineer::~Engineer() {
    printf("Executing the Engineers deconstructor\n");
}

void Engineer::setVacationDays(int vacationDays) {
    this->vacationDays = vacationDays;
}

int Engineer::getVacationDays() {
    return this->vacationDays;
}
