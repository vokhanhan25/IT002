#include <iostream>
#include <cmath>
#include "triangle.h"
#include "point.cpp"

using namespace std;

void TRIANGLE::Input() {
    cout << "NHAP TAM GIAC \n";
    a.Input();
    b.Input();
    c.Input();
}

void TRIANGLE::Output() {
    a.Output();
    b.Output();
    c.Output();
    cout << "\n";
}

void TRIANGLE::Move(const double &xx, const double &yy) {
    a.Move(xx, yy);
    b.Move(xx, yy);
    c.Move(xx, yy);
}

void TRIANGLE::Rotate(const double &rad) {
    a.Rotate(rad);
    b.Rotate(rad);
    c.Rotate(rad);
}

void TRIANGLE::Zoom(const double &k) {
    a.SetX(a.GetX() * k);
    a.SetY(a.GetY() * k);

    b.SetX(b.GetX() * k);
    b.SetY(b.GetY() * k);

    c.SetX(c.GetX() * k);
    c.SetY(c.GetY() * k);
}

TRIANGLE::TRIANGLE() {
    // a.SetXY(0, 0);
    // b.SetXY(0, 2);
    // c.SetXY(2, 0);
}

TRIANGLE::TRIANGLE(const TRIANGLE &x) {
    a = x.a;
    b = x.b;
    c = x.c;
}

TRIANGLE::TRIANGLE(POINT x, POINT y, POINT z) {
    a = x;
    b = y;
    c = z;
}

TRIANGLE::~TRIANGLE() {
    return;
}