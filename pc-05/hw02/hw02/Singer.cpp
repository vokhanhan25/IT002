#include <iostream>
#include "Singer.h"

using namespace std;

void Singer::Input()
{
	Person::Input();
	cout << "Nhap the loai nhac: ";
	cin.ignore();
	cin.getline(kindOfMusic, 30, '\n');
	
	cout << "Nhap nam hoat dong: ";
	cin >> yearOfOperation;
}

void Singer::Output()
{
	Person::Output();
	cout << "The loai nhac: " << kindOfMusic << "\n";
	cout << "Nam hoat dong: " << yearOfOperation << "\n";
}


