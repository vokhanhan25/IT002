#pragma once
#include "Person.h"
class CollegeStudent :
    public Person
{
    private:
        double gpa;
        bool failedSubject;
    public:
        void Input();
        void Output();
};

