#include <iostream>

#include "TRAPEZOID.h"

using namespace std;

void TRAPEZOID::Input()
{
	cout << "Nhap canh day thu nhat: ";
	cin >> bottom1;

	cout << "Nhap canh day thu hai: ";
	cin >> bottom2;

	cout << "Nhap duong cao: ";
	cin >> height;
}

void TRAPEZOID::Output()
{
	cout << "Canh day 1 = " << bottom1 << "\n";
	cout << "Canh day 2 = " << bottom2 << "\n";
	cout << "Duong cao = " << height << "\n";
}
