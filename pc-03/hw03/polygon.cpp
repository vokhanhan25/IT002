#include <iostream>
#include <cmath>
#include "polygon.h"

using namespace std;

void POINT::Input() {
    cout << "NHAP X = ";
    cin >> x;
    cout << "NHAP Y = ";
    cin >> y;
    cout << "\n";
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

int POINT::GetX() {
    return x;
}

int POINT::GetY() {
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

void POINT::Rotate(const double &rad) {
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}

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