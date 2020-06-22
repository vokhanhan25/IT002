#pragma once
#include <iostream>
#include <string>

#include "Book.h"

using namespace std;

class Journal :
    public Book
{
private:
    string field;
public:
    void Input();
    void Output();
};

