#include <iostream>
#include "string.cpp"

int main() {
    CString a, b;
    cin >> a >> b;

    CString res = a + b;
    cout << res << "\n";

    res = a;
    cout << res << "\n";

    cout << a.Compare(b) << "\n";
}