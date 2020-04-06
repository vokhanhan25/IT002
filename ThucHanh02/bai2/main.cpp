#include "iostream"
#include "SoPhuc.cpp"

using namespace std;

int main()
{
    SoPhuc a, b, res;
    a.rf();
    cout << a.pabs() << endl;
    b.rf();
    cout << b.pabs() << endl;

    res = a.tong(b);
    res.wf();

    res = a.hieu(b);
    res.wf();

    res = a.tich(b);
    res.wf();

    res = a.thuong(b);
    res.wf();
}