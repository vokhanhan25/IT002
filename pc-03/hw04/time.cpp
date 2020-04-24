#include "time.h"
#include <iostream>

using namespace std;

void TIME::Input() {
    cout << "GIO = ";
    cin >> h;
    cout << "PHUT = ";
    cin >> m;
    cout << "GIAY = ";
    cin >> s;
}

void TIME::Output() {
    cout <<"BAY GIO LA " << h << " GIO " << m << " PHUT " << s << " GIAY\n"; 
}

void TIME::Inc() {
    s++;
    m += s / 60;
    s %= 60;

    h += m / 60;
    m %= 60;

    h %= 24;
}

void TIME::Dec() {
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

TIME::TIME() {
    h = m = s = 0;
}

TIME::TIME(const int &hh, const int &mm, const int &ss) {
    h = hh;
    m = mm;
    s = ss;
}

TIME::TIME (const TIME &x) {
    h = x.h;
    m = x.m;
    s = x.s;
}

TIME::~TIME() {
    return;
}

