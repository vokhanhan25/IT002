#pragma once
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class NovelBook :
    public Book
{
private:
    string category;
public:
    void Input();
    void Output();
};

