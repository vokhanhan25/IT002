#include <iostream>
#include <cmath>

#include "Point.h"
#include "Polygon.h"

using namespace std;

void Polygon::Input() {
    cout << "Nhap so dinh da giac: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i].Input();
}

void Polygon::Output() {
    cout << "So dinh cua da giac: " << n << "\n";
    for (int i = 0; i < n; i++)
        a[i].Output();
    cout << "\n";
}

double Point::GetX() {
    return x;
}

double Point::GetY() {
    return y;
}

void Point::SetX(const double& val) {
    x = val;
}

void Point::SetY(const double& val) {
    y = val;
}


void Polygon::Move(const double& xx, const double& yy) {
    for (int i = 0; i < n; i++)
        a[i].Move(xx, yy);
}

void Polygon::Rotate(const double& rad) {
    for (int i = 0; i < n; i++)
        a[i].Rotate(rad);
}

void Polygon::Zoom(const double& k) {
    for (int i = 0; i < n; i++) {
        a[i].SetX(a[i].GetX() * k);
        a[i].SetY(a[i].GetY() * k);
    }
}
