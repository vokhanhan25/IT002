#include <iostream>

using namespace std;

class DATE {
    private:
        long d, m, y;

    public:
        void Input();
        void Output();
        DATE();
        DATE(long, long, long);
        DATE(const DATE&);
        ~DATE();
};

void DATE::Input()
{
    cin >> d >> m >> y;
}

void DATE::Output()
{
    cout << d << "/" << m << "/" << y << endl;
}

DATE::DATE() {
    d = 1;
    m = 1;
    y = 0;
}

DATE::DATE (long a, long b, long c) {
    d = a;
    m = b;
    y = c;
}

DATE::DATE (const DATE &a) {
    d = a.d;
    m = a.m;
    y = a.y;
}

DATE::~DATE () {
    cout << "Destructer duoc goi! \n";
    return;
}

int main()
{
    DATE a;
    a.Output();
    DATE b(25, 12, 2001);
    b.Output();
    DATE c(a);
    c.Output();
}
