#include <iostream>
#include "fraction.h"

using namespace std;

int Gcd (int a, int b) {
    if (b == 0)
        return a;
    return Gcd(b, a % b);
}

FRACTION::FRACTION(int a = 0) {
    x = a;
    y = 1;
}

istream& operator >> (istream &is, FRACTION &a) {
    cout << "Tu so = ";
    is >> a.x;
    cout << "Mau so = ";
    is >> a.y;
    return is;
}

ostream& operator << (ostream &os, const FRACTION &a) {
    os << a.x << "/" << a.y << "\n";
    return os;
}

FRACTION FRACTION::operator +(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.y + y * a.x;
    tm.y = y * a.y;

    int gcd = Gcd(tm. x, tm.y);
    tm.x /= gcd;
    tm.y /= gcd;

    return tm;
}

FRACTION FRACTION::operator -(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.y - y * a.x;
    tm.y = y * a.y;

    int gcd = Gcd(tm. x, tm.y);
    tm.x /= gcd;
    tm.y /= gcd;

    return tm;
}

FRACTION FRACTION::operator *(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.x;
    tm.y = y * a.y;

    int gcd = Gcd(tm. x, tm.y);
    tm.x /= gcd;
    tm.y /= gcd;

    return tm;
}

FRACTION FRACTION::operator /(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.y;
    tm.y = y * a.x;

    int gcd = Gcd(tm. x, tm.y);
    tm.x /= gcd;
    tm.y /= gcd;

    return tm;
}

bool FRACTION::operator ==(const FRACTION &a) {
    int tm = Gcd(x, y);
    x /= tm;
    y /= tm;

    tm = Gcd(a.x, a.y);
    x /= tm;
    y /= tm;

    if (x == a.x && y == a.y)
        return true;
    return false;
}

bool FRACTION::operator !=(const FRACTION &a) {
    int tm = Gcd(x, y);
    x /= tm;
    y /= tm;

    tm = Gcd(a.x, a.y);
    x /= tm;
    y /= tm;

    if (x == a.x && y == a.y)
        return false;
    return true;
}