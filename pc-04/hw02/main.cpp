#include <iostream>
#include "fraction.cpp"

using namespace std;

int main() {
    FRACTION a, b;
    cin >> a >> b;
    FRACTION res = a + b;
    cout << res;

    res = a - b;
    cout << res;

    res = a * b;
    cout << res;

    res = a / b;
    cout << res;

    if (a == b) 
        cout << "2 phan so bang nhau\n";
    else cout << "2 phan so KHONG bang nhau\n";

    if (a != b)
        cout << "2 phan so khac nhau\n";
    else cout << "2 phan so KHONG khac nhau\n";
}