#include <iostream>
#include "time.cpp"

using namespace std;

int main () {
    CTime a, b, c;
    cin >> a >> b;

    int ss;
    cout << "Nhap so nguyen giay can them = ";
    cin >> ss;
    a + ss;
    cout << a << "\n";

    cout << "Nhap so nguyen giay can giam: ";
    cin >> ss;
    a - ss;
    cout << a << "\n"; 

    ++a;
    cout << a << "\n";

    --a;
    cout << a << "\n";
    
    cout << a - b << "\n";
}