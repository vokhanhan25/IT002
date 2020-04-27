#include <iostream>

using namespace std;

class RECTANGLE{
    private:
        int length, width;
    public:
        friend istream& operator >> (istream &, RECTANGLE &);
        friend ostream& operator << (ostream &, const RECTANGLE &);
};

istream& operator >> (istream &is, RECTANGLE &a) {
    cout << "Chieu dai = ";
    is >> a.length;
    cout << "Chieu rong = ";
    is >> a.width;
    return is;
}

ostream& operator << (ostream &os, const RECTANGLE &a) {
    os << "Chieu dai = " << a.length << "\n";
    os << "Chieu rong = " << a.width << "\n";
    return os;
}

int main() {
    RECTANGLE a, b;
    cin >> a >> b;
    cout << a << b;
}