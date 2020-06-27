#include <iostream>

#include "CATTLE.h"
#include "COW.h"
#include "GOAT.h"
#include "SHEEP.h"

using namespace std;

int main() {
	int n;
	CATTLE *arrCattle[30];

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
				arrCattle[i] = new COW();
				arrCattle[i]->Sounding();
				break;
			case 2:
				arrCattle[i] = new GOAT();
				arrCattle[i]->Sounding();
				break;
			case 3:
				arrCattle[i] = new SHEEP();
				arrCattle[i]->Sounding();
				break;
		}
	}

	int sumMilk = 0, sumChildren = 0;
	for (int i = 0; i < n; i++) {
		sumMilk += arrCattle[i]->GetMilk();
		sumChildren += arrCattle[i]->GetChildren();
	}

	cout << "Co tong cong " << sumChildren << " con duoc sinh\n";
	cout << "Co tong cong " << sumMilk << " lit sua trong trang trai\n";
}