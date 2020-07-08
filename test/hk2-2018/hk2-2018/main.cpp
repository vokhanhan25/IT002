#include <iostream>

#include "O.h"
#include "C.h"
#include "E.h"
#include "A.h"
#include "N.h"
#include "Element.h"
#include "Person.h"

using namespace std;

int main() {
	Person arrPerson[5];
	int nPerson, pos;
	cout << "Nhap so luong nguoi danh gia tam ly: ";
	cin >> nPerson;
	for (int i = 0; i < nPerson; i++) {
		cout << "Nhap ket qua danh gia tam ly cua nguoi thu " << i + 1 << ":\n";
		arrPerson[i].Input();
	}

	cout << "\nChon nguoi thu i trong danh sach (bat dau tu 1): ";
	cin >> pos;
	cout << "Ket qua danh gia cua nguoi thu i trong danh sach: \n";
	arrPerson[pos - 1].Character();

	cout << "\nDanh sach nhung nguoi co nguy co cao ma nhung nha tuyen dung can chu y: \n";
	for (int i = 0; i < nPerson; i++)
		if (arrPerson[i].Risk())
			cout << "Nguoi thu " << i + 1 << "\n";
}
