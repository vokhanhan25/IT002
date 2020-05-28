#include "time-span.h"

istream& operator>>(istream &is, CTimeSpan &a) {
    cout << "Gio = ";
    is >> a.h;
    cout << "Phut = ";
    is >> a.m;
    cout << "Giay = ";
    is >> a.s;
    return is;
}

ostream& operator<<(ostream &os, const CTimeSpan &a) {
    os <<"TIME SPAN: " << a.h << " gio " << a.m << " phut " << a.s << " giay"; 
    return os;
}

CTimeSpan CTimeSpan::operator+(const CTimeSpan &a) {
    CTimeSpan tm;
    tm.s = s + a.s;
    
    tm.m = m + a.m + tm.s / 60;
    tm.s %= 60;

    tm.h = h + a.h + tm.m / 60;
    tm.m %= 60;
    
    return tm;
}

CTimeSpan CTimeSpan::operator-(const CTimeSpan &a) {
    CTimeSpan tm;

    tm.s = s - a.s;
    while (tm.s < 0) {
        tm.m --;
        tm.s += 60;
    }

    tm.m += m - a.m;
    while (tm.m < 0) {
        tm.h--;
        tm.m += 60;
    }

    tm.h += h - a.h;

    return tm;
}

CTimeSpan::CTimeSpan() {
    h = m = s = 0;
}

CTimeSpan::CTimeSpan(const int &a, const int &b, const int &c) {
    h = a;
    m = b;
    s = c;
}

CTimeSpan::CTimeSpan(const CTimeSpan &a) {
    h = a.h;
    m = a.m;
    s = a.s;
}

CTimeSpan::~CTimeSpan() {
    return;
}