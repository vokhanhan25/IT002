#include "iostream"
#include "SoPhuc.h"
#include "cmath"

using namespace std;

void SoPhuc::rf()
{
    cin >> thuc >> ao;
}

void SoPhuc::wf()
{
    cout << thuc << " + " << ao << "*i" << endl;
}

SoPhuc SoPhuc::tong(const SoPhuc x)
{
    SoPhuc tm;
    tm.thuc = thuc + x.thuc;
    tm.ao = ao + x.ao;
    return tm;
}

SoPhuc SoPhuc::hieu(const SoPhuc x)
{
    SoPhuc tm;
    tm.thuc = thuc - x.thuc;
    tm.ao = ao - x.ao;
    return tm;
}

SoPhuc SoPhuc::tich(const SoPhuc x)
{
    SoPhuc tm;
    tm.thuc = thuc * x.thuc - ao * x.ao;
    tm.ao = thuc * x.ao + x.thuc * ao;
    return tm;
}

SoPhuc SoPhuc::thuong(const SoPhuc x)
{
    SoPhuc tm;
    tm.thuc = (float) (thuc * x.thuc + ao * x.ao) / (x.thuc * x.thuc + x.ao * x.ao);
    tm.ao = (float) (x.thuc * ao - thuc *x.ao) / (x.thuc * x.thuc + x.ao * x.ao);
    return tm;
}

float SoPhuc::pabs()
{
    return (sqrt (thuc * thuc + ao * ao));
}


