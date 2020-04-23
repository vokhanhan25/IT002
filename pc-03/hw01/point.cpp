#include <iostream>
#include "point.h"

using namespace std;

void POINT::Input() {
    cin >> x >> y;
}

void POINT::Output() {
    cout << x << " " << y << "\n";
}

void POINT::SetX(const int &val) {
    x = val;
}

void POINT::SetY(const int &val) {
    y = val;
}

int POINT::GetX() {
    return x;
}

int POINT::GetY() {
    return y;
}

void POINT::Move(const int &xx, const int &yy) {
    x = x + xx;
    y = y + yy;
}

