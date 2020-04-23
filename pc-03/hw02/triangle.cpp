#include <iostream>
#include <cmath>
#include "triangle.h"

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

POINT::POINT() {
    x = y = 0;
}

POINT::POINT(const POINT &a) {
    x = a.x;
    y = a.y;
}

POINT::POINT(int xx, int yy) {
    x = xx;
    y = yy;
}

POINT::~POINT() {
    cout << "DESTRUCTER DUOC GOI!\n";
}

void POINT::Rotate(const double &rad) {
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}

void TRIANGLE::Input() {
    a.Input();
    b.Input();
    c.Input();
}

void TRIANGLE::Output() {
    a.Output();
    b.Output();
    c.Output();
}

void TRIANGLE::Move(const int &xx, const int &yy) {
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
    cout << "DESTRUCTER DUOC GOI!\n";
    return;
}