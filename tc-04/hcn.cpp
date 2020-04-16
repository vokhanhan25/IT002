#include <iostream>

using namespace std;

class hcn 
{
    private:
        float dai, rong;

    public:
        void rf();
        void wf(float, float);
        long TinhChuVi();
        long TinhDienTich();
};

void hcn::rf()
{
    cin >> dai >> rong;
}

void hcn::wf(float cv, float dt)
{
    cout << "Chieu dai = " << dai << endl;
    cout << "Chieu rong = " << rong << endl;
    cout << "Chu vi = " << cv << endl;
    cout << "Dien tich = " << dt << endl;
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
    hcn a;
    a.rf();
    float c = a.TinhChuVi();
    float s = a.TinhDienTich();
    a.wf(c, s);
}