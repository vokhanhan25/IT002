#include <iostream>

using namespace std;

class FRACTION {
    private:
        int x, y;
    public:
        void Input();
        void Output();
        FRACTION operator + (const FRACTION &);
        FRACTION operator - (const FRACTION &);
        FRACTION operator * (const FRACTION &);
};

void FRACTION::Input() {
    cin >> x >> y;
}

void FRACTION::Output() {
    cout << x << "/" << y << endl;
}

FRACTION FRACTION::operator +(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.y + y * a.x;
    tm.y = y * a.y;
    return tm;
}

FRACTION FRACTION::operator -(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.y - y * a.x;
    tm.y = y * a.y;
    return tm;
}

FRACTION FRACTION::operator *(const FRACTION &a) {
    FRACTION tm;
    tm.x = x * a.x;
    tm.y = y * a.y;
    return tm;
}


int main() {
    FRACTION a, b;
    a.Input();
    b.Input();
    FRACTION res = a + b;
    res.Output();

    res = a - b;
    res.Output();

    res = a * b;
    res.Output();
}