#include "IntegerArray.cpp"

using namespace std; 

int main () {
    IntegerArray a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    a.ElementAt(1) = 3;
    a.ElementAt(2) = 4;

    IntegerArray b = a;
    b.ElementAt(1) = 10;
    for (int i = 0; i < b.GetLength(); i++) 
        cout << b[i] << endl;
}