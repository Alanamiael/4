#pragma once
#include "TObject.h"

class Personnel : public TObject {
public:
    Personnel(char *name, int age, float salary);

    Personnel();

    ~Personnel() override;

    char *getName();

    int getAge();

    float getSalary();

    void setName(char *name);

    void setAge(int age);

    void setSalary(float salary);
protected:
    char* name;
    int age;
    float salary;
};
