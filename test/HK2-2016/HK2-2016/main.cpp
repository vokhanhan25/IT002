#include <iostream>

#include "Button.h"
#include "Label.h"
#include "ThanhPhan.h"

using namespace std;

bool Cau2(int x, int y) {
	if (x == y + 6 || x == y - 6)
		return true;
	return false;
}

bool CheckDonSon(ThanhPhan *a[], int n) {
	int color = a[0]->LayMauNen();
	for (int i = 1; i < n; i++)
		if (a[i]->LayMauNen() != color)
			return false;
	return true;
}

bool CheckTrucTiep(ThanhPhan* a[], int n) {
	int color = a[0]->LayMauNen();
	for (int i = 1; i < n; i++)
		if (a[i]->LayMauNen() != color - 6 && a[i]->LayMauNen() != color + 6)
			return false;
	return true;
}

bool CheckTuongDong(ThanhPhan* a[], int n) {
	int color = a[0]->LayMauNen();
	for (int i = 1; i < n; i++) {
		if (color == 1) {
			if (a[i]->LayMauNen() != 12 && a[i]->LayMauNen() != 2 && a[i]->LayMauNen() != color)
				return false;
		}
		else if (color == 12) {
			if (a[i]->LayMauNen() != 11 && a[i]->LayMauNen() != 1 && a[i]->LayMauNen() != color)
				return false;
		}
		else {
			if (a[i]->LayMauNen() != color + 1 && a[i]->LayMauNen() != color - 1 && a[i]->LayMauNen() != color )
				return false;
		}
	}
	return true;
}

int main() {
	ThanhPhan* a[50];
	int n, option;
	cout << "Nhap so luong thanh phan tren trang web: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "1. Label\n";
		cout << "2. Button\n";
		cout << "Nhap lua chon cua ban: ";
		cin >> option;
		switch (option) {
		case 1:
			a[i] = new Label();
			break;
		case 2:
			a[i] = new Button();
			break;
		}
		a[i]->Nhap();
	}
	int mauChu = a[0]->LayMauChu();
	int mauNen = a[0]->LayMauNen();
	bool res1 = Cau2(mauChu, mauNen);
	cout << "\n";
	if (res1)
		cout << "Mau nen va mau chu cua thanh phan dau tien phu hop voi phoi mau truc tiep\n";
	else
		cout << "Mau nen va mau chu cua thanh phan dau tien KHONG phu hop voi phoi mau truc tiep\n";
	
	cout << "\n";
	if (CheckDonSon(a, n))
		cout << "Mau nen cua cac thanh phan phu hop voi phoi mau don sac\n";
	else if (CheckTrucTiep(a, n))
		cout << "Mau nen cua cac thanh phan phu hop voi phoi mau truc tiep\n";
	else if (CheckTuongDong(a, n))
		cout << "Mau nen cua cac thanh phan phu hop voi phoi mau tuong dong\n";
	else 
		cout << "Mau nen cua cac thanh phan KHONG phu hop voi cach phoi mau nao\n";
}