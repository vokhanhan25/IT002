#include <cmath>
#include "vector-matrix.h" 

istream& operator>>(istream &is, VECTOR &x) {
    cout << "Nhap so chieu vector = ";
    is >> x.n;

    cout << "Nhap lan luot gia tri cho tung chieu cua vector: ";
    for (int i = 0; i < x.n; i++) 
        is >> x.v[i];
    return is;
}

ostream& operator<<(ostream &os, const VECTOR &x) {
    os << "So chieu vector = " << x.n << "\n";

    os << "Gia tri cua tung chieu vector: \n";
    for (int i = 0; i < x.n; i++)
        os << x.v[i] << " ";
    return os;
}

VECTOR VECTOR::operator+(const VECTOR &x) {
    VECTOR tm;
    tm.n = max(n, x.n);
    for (int i = 0; i < tm.n; i++)
        tm.v[i] = v[i] + x.v[i];       
    return tm;
}   

VECTOR VECTOR::operator-(const VECTOR &x) {
    VECTOR tm;
    for (int i = 0; i < tm.n; i++)
        tm.v[i] = v[i] - x.v[i];       
    return tm;
}   

int VECTOR::operator*(const VECTOR &x) {
    int tm = 0;
    for (int i = 0; i < max(n, x.n); i++)
        tm += v[i] * x.v[i];
    return tm;      
}   

istream& operator>>(istream &is, MATRIX &x) {
    cout << "Nhap so dong ma tran = ";
    is >> x.m;

    cout << "Nhap so cot cho ma tran = ";
    is >> x.n;

    cout << "Nhap lan luot gia tri cho ma tran: \n";
    for (int i = 0; i < x.m; i++)
        for (int j = 0; j < x.n; j++)
            is >> x.a[i][j];

    return is;
}

ostream& operator<<(ostream &os, const MATRIX &x) {
    os << "So dong ma tran = " << x.m << "\n";
    os << "So cot ma tran = " << x.n << "\n";
    os << "Gia tri cua ma tran: \n";
    for (int i = 0; i < x.m; i++) {
        for (int j = 0; j < x.n; j++)
            os << x.a[i][j] << " ";
        os << "\n";
    }
    return os;
}

MATRIX MATRIX::operator+(const MATRIX &x) {
    MATRIX tm;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++)
            tm.a[i][j] = a[i][j] + x.a[i][j];
    return tm;
}

MATRIX MATRIX::operator-(const MATRIX &x) {
    MATRIX tm;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++)
            tm.a[i][j] = a[i][j] - x.a[i][j];
    return tm;
}

MATRIX MATRIX::operator*(const MATRIX &x) {
    MATRIX tm;
    tm.m = m;
    tm.n = x.n;
    for (int i = 0; i < tm.m; i++) 
        for (int j = 0; j < tm.n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++)
                sum += a[i][k] * x.a[k][j];
            tm.a[i][j] = sum;
        }
    return tm;
}

MATRIX MATRIX::operator*(const VECTOR &b) {
    MATRIX tm; 
    tm.m = m;
    tm.n = 1;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++)
            tm.a[i][j] += a[i][j] * b.v[i];
    return tm;
}


