#include <iostream>

using namespace std;

class FRACTION {
    private:
        int x, y;
    public:
        friend istream& operator >> (istream &, FRACTION &);
        friend ostream& operator << (ostream &, const FRACTION &);
        FRACTION operator + (const FRACTION &);
        FRACTION operator - (const FRACTION &);
        FRACTION operator * (const FRACTION &);
};

istream& operator >> (istream &is, FRACTION &a) {
    cout << "Tu so = ";
    is >> a.x;
    cout << "Mau so = ";
    is >> a.y;
    return is;
}

ostream& operator << (ostream &os, const FRACTION &a) {
    os << a.x << "/" << a.y << "\n";
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
    cin >> a >> b;
    FRACTION res = a + b;
    cout << res;

    res = a - b;
    cout << res;

    res = a * b;
    cout << res;
}