#include <iostream>

#include "KyTuAmNhac.h"

using namespace std;

void KyTuAmNhac::Nhap()
{
	int option;
	cout << "1. Tron, 2. Trang, 3. Den, 4. Moc don\n";
	cout << "5. Moc kep, 6. Moc tam, 7. Moc tu\n";
	cout << "Nhap lua chon: ";
	cin >> option;
	switch (option) {
	case 1:
		truongDo = 4;
		break;
	case 2:
		truongDo = 2;
		break;
	case 3:
		truongDo = 1;
		break;
	case 4:
		truongDo = 1 / 2;
		break;
	case 5:
		truongDo = 1 / 4;
		break;
	case 6:
		truongDo = 1 / 8;
		break;
	case 7:
		truongDo = 1 / 16;
		break;
	}
}

bool KyTuAmNhac::LaDauLangDen() {
	return false;
}

int KyTuAmNhac::LayCaoDo()
{
	return 0;
}

