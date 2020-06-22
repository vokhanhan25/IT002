#pragma once
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;
class TextBook :
    public Book
{
private:
    string subject;
public:
    void Input();
    void Output();
};

