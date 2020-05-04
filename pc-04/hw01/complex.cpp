#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;

COMPLEX::COMPLEX() {
    real = 1;
    imaginary = 0;
}

istream& operator >> (istream &is, COMPLEX &a) {
    cout << "Phan thuc = ";
    is >> a.real;
    cout << "Phan ao = ";
    is >> a.imaginary;
    cout << "\n";
    return is;
}

ostream& operator << (ostream &os, const COMPLEX &a) {
    os << "Phan thuc = " << a.real << "\n";
    os << "Phan ao = " << a.imaginary << "\n\n";
    return os;
}

COMPLEX COMPLEX::operator + (const COMPLEX &a) {
    COMPLEX tm;
    tm.real = real + a.real;
    tm.imaginary = imaginary + a.imaginary;
    return tm;
}

COMPLEX COMPLEX::operator - (const COMPLEX &a) {
    COMPLEX tm;
    tm.real = real - a.real;
    tm.imaginary = imaginary - a.imaginary;
    return tm;
}

COMPLEX COMPLEX::operator * (const COMPLEX &a) {
    COMPLEX tm;
    tm.real = real * a.real - imaginary * a.imaginary;
    tm.imaginary = real * a.imaginary + imaginary * a.real;
    return tm;
}


COMPLEX COMPLEX::operator / (const COMPLEX &a) {
    COMPLEX tm;
    tm.real = (real * a.real + imaginary * a.imaginary) / (pow(a.real, 2) + pow(a.imaginary, 2));
    tm.imaginary = (a.real * imaginary - real *a.imaginary) / (pow(a.real, 2) + pow(a.imaginary, 2));
    return tm;
}

bool COMPLEX::operator == (const COMPLEX &a) {
    if (real == a.real && imaginary == a.imaginary)
        return true;
    return false;
}

bool COMPLEX::operator != (const COMPLEX &a) {
    if (real != a.real && imaginary != a.imaginary)
        return true;
    return false;
}