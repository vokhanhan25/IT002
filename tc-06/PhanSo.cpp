#include <iostream>

using namespace std;

class PHANSO
{
    private:
        long tu, mau;
    
    public:
        void Input();
        void Output();
        PHANSO();
        PHANSO(long, long);
        PHANSO(const PHANSO&);
        ~PHANSO();
};

void PHANSO::Input()
{
    cin >> tu >> mau;
}

void PHANSO::Output()
{
    cout << "PHAN SO = " << tu << "/" << mau << endl;
}

PHANSO::PHANSO() {
    tu = 0;
    mau = 1;
}

PHANSO::PHANSO (long x, long y) {
    tu = x;
    mau = y;
}

PHANSO::PHANSO (const PHANSO &a) {
    tu = a.tu;
    mau = a.mau;
}

PHANSO::~PHANSO () {
    cout << "Destructer duoc goi! \n";
    return;
}

int main()
{
    PHANSO a;
    a.Output();
    PHANSO b(5 ,6);
    b.Output();
    PHANSO c(a);
    c.Output();
}
