#include "date.h"

bool IsLeapYear(const int &y) {
    if ((y % 4 == 0 && y % 100 != 0) || y & 400 == 0)
        return true;
    return false;
}

int GetDayIntMonth(const int &m, const int &y) {
    switch(m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (IsLeapYear(y))
                return 29;
            return 28;
    }
}

istream& operator>>(istream &is, CDate &a) {
    cout << "Nhap ngay: ";
    is >> a.d;

    cout << "Nhap thang: ";
    is >> a.m;

    cout << "Nhap nam: ";
    is >> a.y;
    return is;
}

ostream& operator<<(ostream &os, const CDate &a) {
    os << a.d << "/" << a.m << "/" << a.y;
    return os;
}

void CDate::operator++() {
    d++;
    if (d > GetDayIntMonth(m, y)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}

void CDate::operator--() {
    d--;
    if (d == 0) {
        m--;
        if (m == 0) {
            m = 12;
            y--;
        }
    }
    d = GetDayIntMonth(m, y);
}

CDate CDate::operator+(int n) {
    CDate tm;
    tm.d = d;
    tm.m = m;
    tm.y = y;

    while (n > 0) {
        n--;
        tm.d++;
        if (tm.d > GetDayIntMonth(m, y)) {
            tm.d = 1;
            tm.m++;
            if (tm.m > 12) {
                tm.m = 1;
                tm.y++;
            }
        }
    }
    return tm;
}

CDate CDate::operator-(int n) {
    CDate tm;
    tm.d = d;
    tm.m = m;
    tm.y = y;
    
    while (n > 0) {
        n--;
        tm.d--;
        if (tm.d == 0) {
            tm.m--;
            if (tm.m == 0) {
                tm.m = 12;
                tm.y--;
            }
        }
        tm.d = GetDayIntMonth(tm.m, tm.y);
    }
    return tm;
}

int ConvertToDays(int d, int m, int y) {
    if (m < 3) {
        y--;
        m += 12;
    }
    return 365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
}

int CDate::operator-(const CDate &a) {
    return ConvertToDays(a.d, a.m, a.y) - ConvertToDays(d, m, y);
}