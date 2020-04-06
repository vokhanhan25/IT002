#include "iostream"
#include "PhanSo.cpp"

using namespace std;

int main()
{
    PhanSo a, b, res;
    a.rf();
    cout << a.dinhGiaTri() << endl;
    b.rf();
    cout << b.dinhGiaTri() << endl;

    res = a.tong(b);
    res.wf();

    res = a.hieu(b);
    res.wf();

    res = a.tich(b);
    res.wf();

    res = a.thuong(b);
    res.wf();
}