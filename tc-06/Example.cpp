#include <iostream>

using namespace std;

class hcn 
{
    private:
        float dai, rong;

    public:
        void rf();
        void wf();
        hcn();
        hcn (long , long);
        hcn (const hcn &);
        ~hcn();
        long TinhChuVi();
        long TinhDienTich();
};

hcn::hcn() {
    dai = 0;
    rong = 0;
}

hcn::hcn (long a, long b = 0) {
    dai = a;
    rong = b;
}

hcn::hcn (const hcn &a) {
    dai = a.dai;
    rong = a.rong;
}

hcn::~hcn() {
    cout << "DESTRUCTOR duoc goi" << endl;
    return;
}

void hcn::rf()
{
    cin >> dai >> rong;
}

void hcn::wf()
{
    cout << "Chieu dai = " << dai << endl;
    cout << "Chieu rong = " << rong << endl;
    // cout << "Chu vi = " << cv << endl;
    // cout << "Dien tich = " << dt << endl;
}

long hcn::TinhChuVi()
{
    return (dai+rong)*2;
}

long hcn::TinhDienTich()
{
    return dai*rong;
}

int main()
{
    hcn a, b(5), c(b);
    a.wf();
    b.wf();
    c.wf();
}