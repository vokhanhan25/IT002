#include "vector-matrix.cpp"

using namespace std;

int main() {
    VECTOR a, b, resVector;
    cin >> a >> b;

    resVector = a + b;
    cout << resVector << "\n\n";

    resVector = a - b;
    cout << resVector << "\n\n";

    int resInt = a * b;
    cout << resInt << "\n\n";

    MATRIX c, d, resMatrix;
    cin >> c >> d;
    
    resMatrix = c + d;
    cout << resMatrix << "\n\n";

    resMatrix = c - d;
    cout << resMatrix << "\n\n";

    resMatrix = c * d;
    cout << resMatrix << "\n\n";

    resMatrix = c * a;
    cout << resMatrix << "\n\n";
}