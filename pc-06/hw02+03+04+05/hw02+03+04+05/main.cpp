#include <iostream>

#include "Parallelogram.h"
#include "Pentangon.h"
#include "Point.h"
#include "Polygon.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main() {
	int n;
	cout << "Nhap so luong hinh can nhap: ";
	cin >> n;

	Polygon a[30];
	for (int i = 0; i < n; i++) {
		cout << "\n3: Tam giac\n";
		cout << "4: Tu giac, Hinh binh hanh, Hinh chu nhat\n";
		cout << "5: Ngu giac\n";
		cout << "n: Da giac\n";

		a[i].Input();
	}

	for (int i = 0; i < n; i++)
		a[i].Output();
}