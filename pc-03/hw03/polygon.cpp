#include <iostream>
#include <cmath>
#include "polygon.h"
#include "point.cpp"

using namespace std;

void POLYGON::Input() {
    cout << "SO DINH DA GIAC = ";
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i].Input();
}

void POLYGON::Output() {
    for (int i = 0; i < n; i++) 
        a[i].Output();
    cout << "\n";
}

void POLYGON::Move(const double &xx, const double &yy) {
    for (int i = 0; i < n; i++)
        a[i].Move(xx, yy);
}

void POLYGON::Rotate(const double &rad) {
    for (int i = 0; i < n; i++) 
        a[i].Rotate(rad);
}

void POLYGON::Zoom(const double &k) {
    for (int i = 0; i < n; i++) {
        a[i].SetX(a[i].GetX() * k);
        a[i].SetY(a[i].GetY() * k);
    }
}

POLYGON::POLYGON() {

}

POLYGON::POLYGON(const POLYGON &x) {
    for (int i = 0; i < n; i++) 
        a[i] = x.a[i];
}

POLYGON::POLYGON(POINT b[]) {
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}

POLYGON::~POLYGON() {
    return;
}