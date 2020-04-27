#include "polynomial.cpp"
#include <iostream>

using namespace std;
int main() {
    POLYNOMIAL a, b, res;
    a.Input();
    a.Output();

    b.Input();
    b.Output();

    int resCompare = a.Compare(b);
    if (resCompare == 1)
        cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE LON HON DOI TUONG DUOC TRUYEN VAO THAM SO\n";
    else if (resCompare == -1)
        cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE NHO HON DOI TUONG DUOC TRUYEN VAO THAM SO\n";
    else cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE BANG DOI TUONG DUOC TRUYEN VAO THAM SO\n";

    res = a.Add(b);
    res.Output();

    res = a.Subtract(b);
    res.Output();

    res = a.Multiply(b);
    res.Output();

    res = a.Derivative();
    res.Output();

    res = a.Privitive();
    res.Output();
}