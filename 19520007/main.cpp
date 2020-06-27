#include <iostream>

#include "CanHo.h"
#include "ChungCu.h"
#include "Thuong.h"

using namespace std;

int main() {
	int n, option, nChungCu = 0, nThuong = 0;
	ChungCu arrChungCu[50];
	Thuong arrThuong[50];

	cout << "Nhap so luong can ho: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "1: Can ho chung cu \n";
		cout << "2: Can ho thuong \n";
		cout << "\nNhap lua chon: ";
		cin >> option;
		switch (option) {
			case 1:
				arrChungCu[nChungCu].Input();
				arrChungCu[nChungCu].tinhChiPhiNam();
				nChungCu++;
				break;
			case 2:
				arrThuong[nThuong].Input();
				arrThuong[nThuong].tinhChiPhiNam();
				nThuong++;
				break;
		}
	}

	cout << "\nDanh sach cac can ho CHUNG CU\n";
	for (int i = 0; i < nChungCu; i++)
		arrChungCu[i].Output();

	cout << "\nDanh sach cac can ho THUONG\n";
	for (int i = 0; i < nThuong; i++)
		arrThuong[i].Output();
}