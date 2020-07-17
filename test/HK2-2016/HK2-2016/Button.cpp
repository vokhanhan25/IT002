#include <iostream>
#include <string>

#include "Button.h"

using namespace std;

void Button::Nhap()
{
	ThanhPhan::Nhap();
	int option;
	cout << "1. Hien thi hinh anh\n";
	cout << "2. Hien thi Text\n";
	cout << "Nhap lua chon: ";
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "Nhap dia chi hinh anh: ";
		cin.ignore();
		getline(cin, diaChiHinhAnh);
		mauChu = mauNen = 0;
		break;
	case 2:
		cout << "Nhap noi dung: ";
		cin.ignore();
		getline(cin, text);
		cout << "Nhap mau chu: ";
		cin >> mauChu;
		cout << "Nhap mau nen: ";
		cin >> mauNen;
		break;
	}
}
