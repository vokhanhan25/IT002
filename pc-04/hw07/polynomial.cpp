#include "polynomial.h"
#include <cmath>

POLYNOMIAL POLYNOMIAL::Add(const POLYNOMIAL &x) {
    POLYNOMIAL res;
    res.n = max(n, x.n);
    for (int i = 0; i < res.n; i++) 
        res.coefficient[i] = coefficient[i] + x.coefficient[i];
    return res;
}

POLYNOMIAL POLYNOMIAL::Subtract(const POLYNOMIAL &x) {
    POLYNOMIAL res;
    res.n = max(n, x.n);
    for (int i = 0; i < res.n; i++) 
        res.coefficient[i] = coefficient[i] - x.coefficient[i];
    return res;
}

POLYNOMIAL POLYNOMIAL::Multiply(const POLYNOMIAL &x) {
    POLYNOMIAL res;
    res.n = x.n + n - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < x.n; j++) {
            int k = i + j;
            res.coefficient[k] += coefficient[i] * x.coefficient[j];
        }
    return res;
}

POLYNOMIAL POLYNOMIAL::Derivative() {
    POLYNOMIAL res;
    res.n = n - 1;
    for (int i = 0; i < res.n; i++) 
        res.coefficient[i] = coefficient[i + 1] * (i + 1);
    return res;
}

POLYNOMIAL POLYNOMIAL::Privitive() {
    POLYNOMIAL res;
    res.n = n + 1;
    res.coefficient[0] = 0;
    for (int i = 1; i < res.n; i++) 
        res.coefficient[i] = coefficient[i - 1] / i;
    return res;
}

int POLYNOMIAL::Compare(const POLYNOMIAL &x) {
    if (n > x.n)
        return 1;
    if (n < x.n)
        return -1;
    for (int i = 0; i < n; i++) { 
        if (coefficient[i] > x.coefficient[i])
            return 1;
        if (coefficient[i] < x.coefficient[i])
            return -1;
    }
    return 0;
}

istream& operator>>(istream &is, POLYNOMIAL &a) {
    cout << "So luong don thuc = ";
    is >> a.n;
    for (int i = 0; i < a.n; i++) {
        cout << "He so cua X^" << i << " = ";
        is >> a.coefficient[i];
    }
    return is;
}

ostream& operator<<(ostream &os, const POLYNOMIAL &a) {
    os << "F(X) = ";
    for (int i = a.n - 1; i >= 0; i--) {
        if (i != a.n - 1 && a.coefficient[i] >= 0)
            os << "+ ";
        if (i == 0)
            os << a.coefficient[i];
        else if (i == 1)
            os << a.coefficient[i] << "x ";
        else
            os << a.coefficient[i] << "x^" << i << " ";
    }
    os << "\n\n";
    return os;
}



