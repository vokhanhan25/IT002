#include <iostream>

#include "RECTANGLE.h";
#include "SQUARE.h";
#include "TRAPEZOID.h";
#include "PARALLELOGRAM.h"

using namespace std;

int main() {
	RECTANGLE a;
	SQUARE b;
	TRAPEZOID c;
	PARALLELOGRAM d;

	cout << "1: Hinh chu nhat\n";
	cout << "2: Hinh vuong\n";
	cout << "3: Hinh thang\n";
	cout << "4: Hinh binh hanh\n";

	int option;
	cout << "Nhap lua chon: ";
	cin >> option;

	switch (option)
	{
		case 1:
			a.Input();
			a.Output();
			break;
		case 2:
			b.Input();
			b.Output();
			break;
		case 3:
			c.Input();
			c.Output();
			break;
		case 4:
			d.Input();
			d.Output();
			break;
	}
}