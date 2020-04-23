#include <iostream>
#include <cmath>
#include "triangle.cpp"

using namespace std;

int main() {
    TRIANGLE a;
    a.Input();
    a.Output();

    a.Move(5, 10);
    a.Output();

    a.Zoom(2);
    a.Output();

    a.Rotate(3.14/2);
    a.Output();
}