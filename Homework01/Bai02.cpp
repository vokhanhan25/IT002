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

int compare (fraction a, fraction b)
{
    float x = (float) a.tu / a.mau;
    float y = (float) b.tu / b.mau;
    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

int main()
{
    fraction a, b;
    rf(a);
    rf(b);
    int res = compare(a, b);
    if (res == 1)
        wf(a);
    else if (res == -1)
        wf(b);
    else
    {
        wf(a);
        cout << "2 PHAN SO BANG NHAU";
    }
}
