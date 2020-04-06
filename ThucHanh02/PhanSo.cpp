#include "iostream"
#include "PhanSo.h"

using namespace std;

void PhanSo::rf()
{
    cin >> tu >> mau;
}

void PhanSo::wf()
{
    cout << tu << "/" << mau << endl;
}

PhanSo PhanSo::tong(const PhanSo x)
{
    PhanSo tm;
    tm.tu = tu * x.mau + mau * x.tu;
    tm.mau = mau * x.mau;
    return tm;
}

PhanSo PhanSo::hieu(const PhanSo x)
{
    PhanSo tm;
    tm.tu = tu * x.mau - mau * x.tu;
    tm.mau = mau * x.mau;
    return tm;
}

PhanSo PhanSo::tich(const PhanSo x)
{
    PhanSo tm;
    tm.tu = tu * x.tu;
    tm.mau = x.mau * x.mau;
    return tm;
}

PhanSo PhanSo::thuong(const PhanSo x)
{
    PhanSo tm;
    tm.tu = tu * x.mau;
    tm.mau = x.mau * tu;
    return tm;
}

float PhanSo::dinhGiaTri()
{
    return (float) tu / mau;
}

