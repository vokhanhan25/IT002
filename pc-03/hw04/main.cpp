#include <iostream>
#include "time.cpp"

using namespace std;

int main() {
    TIME a;
    a.Input();
    a.Output();

    a.Inc();
    a.Output();

    a.Dec();
    a.Output();
}