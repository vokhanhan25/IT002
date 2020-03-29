#include <iostream>

using namespace std;

struct fraction
{
    long tu;
    long mau;
};

long gcd (long a, long b)
{
    if (b == 0) return a;
    return gcd (b, a % b);
}

void rf(fraction &a)
{
    cin >> a.tu >> a.mau;
}

void wf(fraction a)
{
    cout << a.tu << endl;
    cout << a.mau << endl;
}

void compact(fraction &a)
{
    long tm = gcd (a.tu, a.mau);
    a.tu = a.tu / tm;
    a.mau = a.mau / tm;
}

int main()
{
    fraction a;
    rf(a);
    compact(a);
    wf(a);
}
