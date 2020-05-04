#include "time.h"
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
    os <<"TIME SPAN: " << a.h << " gio " << a.m << " phut " << a.s << " giay"; 
    return os;
}

CTime CTime::operator+(const CTime &a) {
    CTime tm;
    tm.s = s + a.s;
    
    tm.m = m + a.m + tm.s / 60;
    tm.s %= 60;

    tm.h = h + a.h + tm.m / 60;
    tm.m %= 60;
    
    return tm;
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