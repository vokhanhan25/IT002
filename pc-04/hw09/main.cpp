#include <iostream>
#include "integer.cpp"

int main() {
    INTEGER a, b;
    cin >> a >> b;

    INTEGER res = a + b;
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