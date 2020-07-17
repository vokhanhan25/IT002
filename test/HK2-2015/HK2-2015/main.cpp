#include <iostream>
#include "DauLang.h"
#include "KyTuAmNhac.h"
#include "NotNhac.h"

using namespace std;

int main() {
	KyTuAmNhac *a[50];
	int n, option, dauLangDen = 0, maxCaoDo = 0;
	cout << "Nhap so luong ky tu am nhac can soan: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "1: Not Nhac\n";
		cout << "2: Dau Lang\n";
		cout << "Nhap lua chon cua ban: ";
		cin >> option;
		switch (option) {
			case 1:
				a[i] = new NotNhac();
				break;
			case 2:
				a[i] = new DauLang();
				break;
		}
		a[i]->Nhap();
		if (a[i]->LaDauLangDen())
			dauLangDen++;
		if (a[i]->LayCaoDo() > maxCaoDo)
			maxCaoDo = a[i]->LayCaoDo();
	}
	cout << "So not lang den = " << dauLangDen << "\n";
	cout << "Not co cao do lon nhat = " << maxCaoDo << "\n";

}