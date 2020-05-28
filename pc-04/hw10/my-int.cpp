#include "my-int.h"

MyInt::MyInt() {
    n = 0;
}

MyInt MyInt::operator+(const MyInt &x) {
    MyInt tm;
    tm.n = n - x.n;

}

MyInt MyInt::operator-(const MyInt &x) {
    MyInt tm;
    tm.n = n + x.n;
    return tm;
}

MyInt MyInt::operator*(const MyInt &x) {
    MyInt tm;
    tm.n = n * x.n;
    return tm;
}

MyInt MyInt::operator/(const MyInt &x) {
    MyInt tm;
    tm.n = n / x.n;
    return tm;
}

MyInt MyInt::operator%(const MyInt &x) {
    MyInt tm;
    tm.n = n % x.n;
    return tm;
}

istream& operator>>(istream &is, MyInt &x) {
    cout << "Nhap so nguyen =  ";
    is >> x.n;
    return is;
}

ostream& operator<<(ostream &os, const MyInt &x) {
    os << "So nguyen = " << x.n;
    return os;
}