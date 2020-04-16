#include <iostream>

using namespace std;

class PHANSO 
{
    private:
        long tu, mau;

    public:
        PHANSO (); //Phương thức thiết lập mặc định
        PHANSO (long, long); //Phương thức thiết lập khi biết đầy đủ thông tin
        PHANSO (const PHANSO&); //Phương thức thiết lập sao chép
        void rf();
        void wf();
        PHANSO cong(const PHANSO);
};


void PHANSO::rf()
{
    cin >> tu >> mau;
}

void PHANSO::wf()
{
    cout << tu << "/" << mau << endl;
}

int main()
{
    PHANSO a;
    PHANSO b(1, 2);
    a.rf();
    b.wf();
    PHANSO c(a);
    c.wf();
}