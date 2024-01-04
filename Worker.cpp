#include "Worker.h"
#include "iostream"

void Worker::print() {
    printf_s("Name: %s; Age: %d; Salary: %f dollars; Experience: %d years\n", this->name, this->age, this->salary, this->experience);
}

Worker::Worker(char *name, int age, float salary, int experience) {
    printf("Worker constructor with arguments.\n");
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
    this->setExperience(experience);
}

Worker::Worker() {
    char name[] = "Unknown";
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
    this->setExperience(experience);
}

Worker::~Worker() {
    printf("Executing the Worker deconstructor\n");
}

int Worker::getExperience() {
    return this->experience;
}

void Worker::setExperience(int experience) {
    this->experience = experience;
}
