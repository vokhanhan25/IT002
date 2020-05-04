#include <iostream>
#include "complex.cpp"

using namespace std;

int main() {
    COMPLEX a, b;
    cin >> a >> b;
    
    COMPLEX res = a + b;
    cout << res;

    res = a - b;
    cout << res;

    res = a * b;
    cout << res;

    res = a / b;
    cout << res;

    if (a == b)
        cout << "2 so phuc bang nhau\n";
    else cout << "2 so phuc KHONG bang nhau\n";

    if (a != b)
        cout << "2 so phuc khac nhau\n";
    else cout << "2 so phuc KHONG khac nhau\n";
} 