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
    CTime tm;

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