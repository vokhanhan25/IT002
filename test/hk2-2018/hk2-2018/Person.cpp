#include <iostream>
#include "O.h"
#include "C.h"
#include "E.h"
#include "A.h"
#include "N.h"
#include "Person.h"

using namespace std;

void Person::Input()
{
	double value;
	cout << "Nhap chi so cua O: ";
	cin >> value;
	arrElement[0] = new O(value);

	cout << "Nhap chi so cua C: ";
	cin >> value;
	arrElement[1] = new C(value);

	cout << "Nhap chi so cua E: ";
	cin >> value;
	arrElement[2] = new E(value);

	cout << "Nhap chi so cua A: ";
	cin >> value;
	arrElement[3] = new A(value);

	cout << "Nhap chi so cua N: ";
	cin >> value;
	arrElement[4] = new N(value);

	cout << "\n";
}

void Person::Character()
{
	for (int i = 0; i < 5; i++)
		if (arrElement[i]->GetValue() >= 70)
			arrElement[i]->HighIndex();
		else if (arrElement[i]->GetValue() <= 30)
			arrElement[i]->LowIndex();
		else
			cout << "Khong xac dinh ro\n";
}

bool Person::Risk()
{
	if (arrElement[1]->GetValue() <= 30)
		return true;
	if ((arrElement[2]->GetValue() <= 30) && (arrElement[4]->GetValue() >= 70))
		return true;
	if (arrElement[4]->GetValue() >= 70)
		return true;
	return false;
}
