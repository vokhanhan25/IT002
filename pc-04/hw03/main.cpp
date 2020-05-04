#include "time-span.cpp"

int main() {
    CTimeSpan a, b;
    cin >> a >> b;
    
    CTimeSpan res = a + b;
    cout << res << "\n";

    res = a - b;
    cout << res << "\n";
}