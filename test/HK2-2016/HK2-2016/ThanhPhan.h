#pragma once
#include <iostream>
#include <string>

using namespace std;

class ThanhPhan
{
protected:
	double x, y, d, r;
	int mauChu, mauNen;
	string text;
public:
	virtual void Nhap();
	int LayMauChu();
	int LayMauNen();
};

