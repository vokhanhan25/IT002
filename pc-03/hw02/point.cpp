#include <iostream>
#include <cmath>

using namespace std;

void POINT::Input() {
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

void POINT::Output() {
    cout << "(x, y) = " << "(" << x << ", " << y << ")\n";
}

void POINT::SetX(const double &val) {
    x = val;
}

void POINT::SetY(const double &val) {
    y = val;
}

void POINT::SetXY(const double &xx, const double &yy) {
    x = xx;
    y = yy;
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

void POINT::Rotate(const double &rad) {
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}

double POINT::GetDistance(const POINT &a) {
    return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
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

