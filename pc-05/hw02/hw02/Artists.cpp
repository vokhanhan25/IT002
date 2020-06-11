#include <iostream>
#include "Artists.h"

using namespace std;

void Artists::Input()
{
	Person::Input();

	cout << "Linh vuc hoat dong: ";
	cin.getline(field, 30, '\n');

	cout << "Nam hoat dong: ";
	cin >> yearOfOperation;
}

void Artists::Output()
{
	Person::Output();
	cout << "Linh vuc hoat dong: " << field << "\n";
	cout << "Nam hoat dong: " << yearOfOperation << "\n";
	cout << "\n";
}
