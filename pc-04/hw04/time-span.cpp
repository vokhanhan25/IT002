#include "time-span.h"

CTimeSpan::CTimeSpan() {
    h = m = s = 0;
}

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

void CTimeSpan::SetS(const int &a) {
    s = a;
}

void CTimeSpan::SetM(const int &a) {
    m = a;
}

void CTimeSpan::SetH(const int &a) {
    h = a;
}

int CTimeSpan::GetS() {
    return s;
}

int CTimeSpan::GetM() {
    return m;
}

int CTimeSpan::GetH() {
    return h;
}

