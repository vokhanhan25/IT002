#include "string.h"

CString::CString() {
    s = "";
}

CString::CString(const string &a) {
    s = a;
}

CString::CString(const CString &a) {
    s = a.s;
} 

CString::~CString() {
    return;
}

CString CString::operator+(const CString &a) {
    CString tm;
    tm.s = s + a.s;
    return tm;
}

void CString::operator=(const CString &a) {
    s = a.s;
}

int CString::Compare(const CString &a) {
    if (s > a.s)
        return 1;
    if (s < a.s)
        return -1;
    return 0;
}

istream& operator>> (istream &is, CString &a) {
    cout << "Nhap xau: ";
    getline(cin, a.s);
    return is;
}

ostream& operator<< (ostream &os, const CString &a) {
    os << "Xau: " << a.s;
    return os;
}






