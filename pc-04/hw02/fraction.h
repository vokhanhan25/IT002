#include <iostream>

using namespace std;

class FRACTION {
    private:
        int x, y;
    public:
        FRACTION (int );
        friend istream& operator >> (istream &, FRACTION &);
        friend ostream& operator << (ostream &, const FRACTION &);
        FRACTION operator + (const FRACTION &);
        FRACTION operator - (const FRACTION &);
        FRACTION operator * (const FRACTION &);
        FRACTION operator / (const FRACTION &);
        bool operator == (const FRACTION &);
        bool operator != (const FRACTION &);
};