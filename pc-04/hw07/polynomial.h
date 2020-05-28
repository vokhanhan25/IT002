#include <iostream>

using namespace std;

#define MAXN 1000

class POLYNOMIAL {
    private:
        int n;
        double coefficient[MAXN];

    public:
        int Compare(const POLYNOMIAL &);
        POLYNOMIAL Add (const POLYNOMIAL &);
        POLYNOMIAL Subtract (const POLYNOMIAL &);
        POLYNOMIAL Multiply (const POLYNOMIAL &);
        POLYNOMIAL Derivative();
        POLYNOMIAL Privitive();
        friend istream& operator>>(istream &, POLYNOMIAL &a);
        friend ostream& operator<<(ostream &, const POLYNOMIAL &a);
};