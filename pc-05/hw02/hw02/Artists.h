#pragma once
#include "Person.h"
class Artists :
    public Person
{
private:
    int yearOfOperation;
    char field[30];
public:
    void Input();
    void Output();
};

