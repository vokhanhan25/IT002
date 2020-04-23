#include <iostream>
#include "polygon.cpp"

using namespace std;

int main() {
    POLYGON a;
    a.Input();
    a.Output();

    a.Move(5, 5);
    a.Output();

    a.Zoom(3);
    a.Output();    
    
    a.Rotate(2);
    a.Output();

}