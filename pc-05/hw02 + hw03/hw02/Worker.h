#pragma once
#include "Person.h"
class Worker :
    public Person
{
    private:
        double salary;
        char company[30];
    public:
        void Input();
        void Output();
};

