#include "integer.h"

INTEGER::INTEGER() {
    n = 0;
}

INTEGER INTEGER::operator+(const INTEGER &x) {
    INTEGER tm;
    tm.n = n + x.n;

}

INTEGER INTEGER::operator-(const INTEGER &x) {
    INTEGER tm;
    tm.n = n - x.n;
    return tm;
}

INTEGER INTEGER::operator*(const INTEGER &x) {
    INTEGER tm;
    tm.n = n * x.n;
    return tm;
}

INTEGER INTEGER::operator/(const INTEGER &x) {
    INTEGER tm;
    tm.n = n / x.n;
    return tm;
}

INTEGER INTEGER::operator%(const INTEGER &x) {
    INTEGER tm;
    tm.n = n % x.n;
    return tm;
}

istream& operator>>(istream &is, INTEGER &x) {
    cout << "Nhap so nguyen =  ";
    is >> x.n;
    return is;
}

ostream& operator<<(ostream &os, const INTEGER &x) {
    os << "So nguyen = " << x.n;
    return os;
}