#include <iostream>
#include "date.cpp"

using namespace std;

int main() {
    CDate a, b;
    cin >> a >> b;
    
    int resInt = a - b;
    cout << "Khoang cach giua 2 ngay = " << resInt << "\n";

    ++a;
    cout << a << "\n";

    --a;
    cout << b << "\n";

    CDate res = a + 6;
    cout << res << "\n";

    res = b - 5;
    cout << res << "\n";
}