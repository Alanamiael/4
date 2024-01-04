#include "Personnel.h"
#include "iostream"
#include <cstring>

char* Personnel::getName() {
    return name;
}

int Personnel::getAge() {
    return this->age;
}

float Personnel::getSalary() {
    return this->salary;
}

Personnel::Personnel(char *name, int age, float salary) {
    printf("Personnel constructor with arguments.\n");
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
}

Personnel::Personnel() {
    char name[] = "Unknown";
    this->setName(name);
    this->setAge(age);
    this->setSalary(salary);
}

void Personnel::setName(char *name) {
    this->name = _strdup(name);
}

void Personnel::setAge(int age) {
    this->age = age;
}

void Personnel::setSalary(float salary) {
    this->salary = salary;
}

Personnel::~Personnel() {
    printf("Executing the Personnel deconstructor\n");
}
