#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	string name, author;
public:
	virtual void Input();
	virtual void Output();
};

