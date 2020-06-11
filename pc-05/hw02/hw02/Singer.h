#pragma once
#include "Person.h"
class Singer :
    public Person
{
private:
    char kindOfMusic[30];
    int yearOfOperation;
public:
    void Input();
    void Output();
};

