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
    a.Move(10, 5);
    a.Output();
    POINT c(b);
    c.Output();
}