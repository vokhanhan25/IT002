#pragma once

class STAFF {
    private:
    protected:
        char name[50];
        char dataOfBirth[10];
        double salary;
    public:
        STAFF();
        ~STAFF();
        void Input();
        void Output();
        double GetSalary();
};