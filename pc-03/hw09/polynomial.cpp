#include "polynomial.h"
#include <cmath>
#include <iostream>

using namespace std;

void POLYNOMIAL::Input() {
    cout << "SO LUONG DON THUC = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "HE SO CUA X^" << i << " = ";
        cin >> coefficient[i];
    }
}

void POLYNOMIAL::Output() {
    cout << "F(X) = ";
    for (int i = n - 1; i >= 0; i--) {
        if (i != n - 1 && coefficient[i] >= 0)
            cout << "+ ";
        if (i == 0)
            cout << coefficient[i];
        else if (i == 1)
            cout << coefficient[i] << "x ";
        else
            cout << coefficient[i] << "x^" << i << " ";
    }
    cout << "\n\n";
}

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
    for (int i = 0; i < max(n, x.n); i++) 
        res.coefficient[i] = coefficient[i] - x.coefficient[i];
    return res;
}

POLYNOMIAL POLYNOMIAL::Multiply(const POLYNOMIAL &x) {
    POLYNOMIAL res;
    res.n = x.n + n - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < x.n; j++) {
            int k = i + j;
            res.coefficient[k] = coefficient[i] * x.coefficient[j];
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

