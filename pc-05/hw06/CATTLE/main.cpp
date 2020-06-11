#include <iostream>

#include "CATTLE.h"
#include "COW.h"
#include "GOAT.h"
#include "SHEEP.h"

using namespace std;

int main() {
	int n, nCow = 0, nGoat = 0, nSheep = 0;
	COW arrCow[10];
	GOAT arrGoat[10];
	SHEEP arrSheep[10];

	cout << "Nhap tong so gia suc: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "1: Bo\n";
		cout << "2: De\n";
		cout << "3: Cuu\n";

		cout << "Nhap lua chon: ";
		int option;
		cin >> option;

		switch (option) {
			case 1:
				arrCow[nCow].Sounding();
				nCow++;
				break;
			case 2:
				arrGoat[nGoat].Sounding();
				nGoat++;
				break;
			case 3:
				arrSheep[nSheep].Sounding();
				nSheep++;
				break;
		}
	}

	int sumMilk = 0, sumChildren = 0;
	for (int i = 0; i < nCow; i++) {
		sumMilk += arrCow[i].GetMilk();
		sumChildren += arrCow[i].GetChildren();
	}

	int sumCow = sumChildren + nCow;
	cout << "Co tong cong " << sumCow << " con bo\n";

	sumChildren = 0;
	for (int i = 0; i < nGoat; i++) {
		sumMilk += arrGoat[i].GetMilk();
		sumChildren += arrGoat[i].GetChildren();
	}

	int sumGoat = sumChildren + nGoat;
	cout << "Co tong cong " << sumGoat << " con de\n";

	sumChildren = 0;
	for (int i = 0; i < nSheep; i++) {
		sumMilk += arrSheep[i].GetMilk();
		sumChildren += arrSheep[i].GetChildren();
	}

	int sumSheep = sumChildren + nSheep;
	cout << "Co tong cong " << sumSheep << " con cuu\n";

	cout << "Co tong cong " << sumMilk << " lit sua trong trang trai\n";
}