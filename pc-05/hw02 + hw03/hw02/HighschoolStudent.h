#pragma once
#include "Person.h"
class HighschoolStudent :
    public Person
{
    private:
        double gpa;
        bool inventedParents;
    public:
        void Input();
        void Output();
};

