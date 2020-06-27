#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

void Point::Input() {
    cout << "\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

void Point::Output() {
    cout << "(x, y) = " << "(" << x << ", " << y << ")\n";
}

void Point::Move(const double& xx, const double& yy) {
    x = x + xx;
    y = y + yy;
}

void Point::Rotate(const double& rad) {
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}

double Point::GetDistance(const Point& a) {
    return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
}



