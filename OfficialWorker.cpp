#include "OfficialWorker.h"
#include "stdio.h"

OfficialWorker::OfficialWorker(char *name, int age, float salary, int experience, int sickLeaveDays) {
    printf("OfficialWorker constructor with arguments.\n");
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
    this->setExperience(experience);
    this->setSickLeaveDays(sickLeaveDays);
}

void OfficialWorker::print() {
    printf_s("Name: %s; Age: %d; Salary: %f dollars; Experience: %d years; Sick leave days: %d days\n", this->name,
             this->age, this->salary, this->experience, this->sickLeaveDays);
}

OfficialWorker::OfficialWorker() {
    char name[] = "Unknown";
    this->setName(name);
    this->setAge(0);
    this->setSalary(0);
    this->setExperience(0);
    this->setSickLeaveDays(0);
}

OfficialWorker::~OfficialWorker() {
    printf("Executing the OfficialWorker deconstructor\n");
}

void OfficialWorker::setSickLeaveDays(int sickLeaveDays) {
    this->sickLeaveDays = sickLeaveDays;
}

int OfficialWorker::getsickLeaveDays() {
    return this->sickLeaveDays;
}
