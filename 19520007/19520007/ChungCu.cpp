#include "ChungCu.h"

void ChungCu::Input()
{
	CanHo::Input();
	cout << "Nhap phi dich vu: ";
	cin >> phiDichVu;
}

void ChungCu::Output()
{
	CanHo::Output();
	cout << "Phi dich vu: " << phiDichVu << "\n";
}

double ChungCu::tinhChiPhiNam()
{
	chiPhiNam = tienThueThang * 12 + phiDichVu;
	return chiPhiNam;
}
