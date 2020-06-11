#include "Person.h"
#include <iostream>

using namespace std;

void Person::Input()
{
	cout << "Nhap ten: ";
	cin.ignore();
	cin.getline(name, 50, '\n');

	cout << "Nhap tuoi: ";
	cin >> age;

	cout << "Nhap gioi tinh: ";
	cin.ignore();
	cin.getline(gender, 10, '\n');
}

void Person::Output()
{
	cout << "Ho ten: " << name << "\n";
	cout << "Tuoi: " << age << "\n";
	cout << "Gioi tinh: " << gender << "\n";
}
