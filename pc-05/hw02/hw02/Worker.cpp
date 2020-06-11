#include <iostream>
#include "Worker.h"

using namespace std;

void Worker::Input()
{
	Person::Input();
	cout << "Nhap ten cong ty: ";
	cin.ignore();
	cin.getline(company, 30, '\n');

	cout << "Nhap luong: ";
	cin >> salary;
}

void Worker::Output()
{
	Person::Output();
	cout << "Cong ty: " << company << "\n";
	cout << "Luong: " << salary << "\n";
	cout << "\n";
}
