#include <iostream>

#include "BloodGroup.h"

using namespace std;

void BloodGroup::Input()
{
	int value;
	cout << "1: +\n";
	cout << "2: -\n";
	cout << "Nhap Rh: ";
	cin >> value;
	if (value == 1)
		rh = true;
	else rh = false;
}

bool BloodGroup::GetRh()
{
	return rh;
}

