//#include "time.h"
#include "time-span.cpp"

CTime::CTime() {
    h = m = s = 0;
}

istream& operator>>(istream &is, CTime &a) {
    cout << "Gio = ";
    is >> a.h;
    cout << "Phut = ";
    is >> a.m;
    cout << "Giay = ";
    is >> a.s;
    return is;
}

ostream& operator<<(ostream &os, const CTime &a) {
    os <<"TIME: " << a.h << " gio " << a.m << " phut " << a.s << " giay"; 
    return os;
}

void CTime::operator+(const int &ss) {
    s += ss;
    
    m += s / 60;
    s %= 60;

    h += m / 60;
    m %= 60;

    h %= 24;
}

void CTime::operator-(const int &ss) {
    s -= ss;
    while (s < 0) {
        m--;
        s += 60;
    }

    while (m < 0) {
        h--;
        m += 60;
    }

    while (h < 0)
        h += 24;
}

CTimeSpan CTime::operator-(const CTime &a) {
    CTimeSpan tm;

    tm.SetS(s - a.s);
    while (tm.GetS() < 0) {
        tm.SetM(tm.GetM() - 1);
        tm.SetS(tm.GetS() + 60);
    }

    tm.SetM(tm.GetM() + m - a.m);
    while (tm.GetM() < 0) {
        tm.SetH(tm.GetH() - 1);
        tm.SetM(tm.GetM() + 60);
    }
    tm.SetH(tm.GetH() + h - a.h);
    return tm;
}


void CTime::operator++() {
    s++;
    m += s / 60;
    s %= 60;

    h += m / 60;
    m %= 60;

    h %= 24;
}

void CTime::operator--() {
    s--;
    if (s < 0) {
        m--;
        s += 60;
    }

    if (m < 0) {
        h--;
        m += 60;
    }

    if (h < 0) 
        h += 24;
}