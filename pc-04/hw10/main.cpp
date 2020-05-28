#include <iostream>
#include "my-int.cpp"

int main() {
    MyInt a, b;
    cin >> a >> b;

    MyInt res = a + b;
    cout << res << "\n";

    res = a - b;
    cout << res << "\n";

    res = a * b;
    cout << res << "\n";

    res = a / b;
    cout << res << "\n";

    res = a % b;
    cout << res << "\n";
}