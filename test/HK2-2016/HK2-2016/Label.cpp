#include <iostream>
#include <string>

#include "Label.h"

using namespace std;

void Label::Nhap()
{
	ThanhPhan::Nhap();
	cout << "Nhap text hien thi: ";
	cin.ignore();
	getline(cin, text);

	cout << "Nhap mau chu: ";
	cin >> mauChu;
	
	cout << "Nhap mau nen: ";
	cin >> mauNen;
}
