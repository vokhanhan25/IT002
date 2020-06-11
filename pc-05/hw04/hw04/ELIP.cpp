#include <iostream>

#include "ELIP.h"

using namespace std;

void ELIP::Input()
{
	cout << "Nhap ban truc nho: ";
	cin >> semiMinorAxis;

	cout << "Nhap ban truc lon: ";
	cin >> semiMajorAxis;
}

void ELIP::Output()
{
	cout << "Ban truc nho = " << semiMinorAxis << "\n";
	cout << "Ban truc lon = " << semiMajorAxis << "\n";
	cout << "\n";
}
