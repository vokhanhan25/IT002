#include "CanHo.h"

void CanHo::Input()
{
	cout << "Nhap dia chi can ho: ";
	cin.ignore();
	getline(cin, diaChi);

	cout << "Nhap tien dat coc: ";
	cin >> tienDatCoc;

	cout << "Nhap tien thue hang thang: ";
	cin >> tienThueThang;

	cout << "Nhap ngay bat dau thue: ";
	cin >> ngayThue;
}

void CanHo::Output()
{
	cout << "\nDia chi can ho: " << diaChi << "\n";
	cout << "Tien dat coc: " << tienDatCoc << "\n";
	cout << "Tien thue hang thang: " << tienThueThang << "\n";
	cout << "Ngay bat dau thue: " << ngayThue << "\n";
	cout << "CHI PHI NAM: " << chiPhiNam << "\n";
}
