#include <iostream>
#include "point.h"

using namespace std;

void POINT::Input() {
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
}

void POINT::Output() {
    cout << x << " " << y << "\n";
}

void POINT::SetX(const double &val) {
    x = val;
}

void POINT::SetY(const double &val) {
    y = val;
}

double POINT::GetX() {
    return x;
}

double POINT::GetY() {
    return y;
}

void POINT::Move(const double &xx, const double &yy) {
    x = x + xx;
    y = y + yy;
}

POINT::POINT() {
    x = y = 0;
}

POINT::POINT(const POINT &a) {
    x = a.x;
    y = a.y;
}

POINT::POINT(double xx, double yy) {
    x = xx;
    y = yy;
}

POINT::~POINT() {
    return;
}

