#include <iostream>

#include "RECTANGLE.h"

using namespace std;

void RECTANGLE::Input()
{
	cout << "Nhap chieu rong: ";
	cin >> width;

	cout << "Nhap chieu dai: ";
	cin >> length;
}

void RECTANGLE::Output()
{
	cout << "Chieu rong = " << width << "\n";
	cout << "Chieu dai = " << length << "\n";
}
