#include "polynomial.cpp"

using namespace std;
int main() {
    POLYNOMIAL a, b, res;
    cin >> a >> b;

    int resCompare = a.Compare(b);
    if (resCompare == 1)
        cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE LON HON DOI TUONG DUOC TRUYEN VAO THAM SO\n";
    else if (resCompare == -1)
        cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE NHO HON DOI TUONG DUOC TRUYEN VAO THAM SO\n";
    else cout << "DOI TUONG GOI THUC HIEN PHUONG THUC COMPARE BANG DOI TUONG DUOC TRUYEN VAO THAM SO\n";

    res = a.Add(b);
    cout << res;

    res = a.Subtract(b);
    cout << res;

    res = a.Multiply(b);
    cout << res;

    res = a.Derivative();
    cout << res;

    res = a.Privitive();
    cout << res;
}