#include <iostream>

using namespace std;

struct fraction
{
    long tu;
    long mau;
};


void rf(fraction &a)
{
    cin >> a.tu >> a.mau;
}

void wf(fraction a)
{
    cout << a.tu << endl;
    cout << a.mau << endl;
}

fraction tong (fraction a, fraction b)
{
    fraction tm;
    tm.tu = a.tu * b.mau + a.mau*b.tu;
    tm.mau = a.mau * b.mau;
    return tm;
}

fraction hieu (fraction a, fraction b)
{
    fraction tm;
    tm.tu = a.tu * b.mau - a.mau*b.tu;
    tm.mau = a.mau * b.mau;
    return tm;
}

fraction tich (fraction a, fraction b)
{
    fraction tm;
    tm.tu = a.tu * b.tu;
    tm.mau = a.mau * b.mau;
    return tm;
}

fraction thuong (fraction a, fraction b)
{
    fraction tm;
    tm.tu = a.tu * b.mau;
    tm.mau = a.mau * b.tu;
    return tm;
}

int main()
{
    fraction a, b, res;
    rf(a);
    rf(b);

    res = tong (a,b);
    cout << "Tong la" << endl;
    wf(res);

    res = hieu (a,b);
    cout << "Hieu la" << endl;
    wf(res);

    res = tich (a,b);
    cout << "Tich la" << endl;
    wf(res);

    res = thuong (a,b);
    cout << "Thuong la" << endl;
    wf(res);
}
