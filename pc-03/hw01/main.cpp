#include <iostream>
#include "point.cpp"

using namespace std;

int main() {
    POINT a;
    POINT b;
    b.Output();
    a.Input();
    cout << a.GetX() << " " << a.GetY() << "\n";
    a.SetX(5);
    a.SetY(10);
    a.SetXY(2, 2);
    a.Move(10, 5);
    a.Output();
    b.Output();
    double res = a.GetDistance(b);
    cout << res << "\n";
    POINT c(b);
    c.Output();
}