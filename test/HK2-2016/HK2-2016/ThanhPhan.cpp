#include <iostream>

#include "ThanhPhan.h"

using namespace std;

void ThanhPhan::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
	cout << "Nhap chieu dai: ";
	cin >> d;
	cout << "Nhap chieu rong: ";
	cin >> r;
}

int ThanhPhan::LayMauChu()
{
	return mauChu;
}

int ThanhPhan::LayMauNen()
{
	return mauNen;
}
