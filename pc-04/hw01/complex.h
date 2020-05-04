#include <iostream>

using namespace std;

class COMPLEX{
    private:
        double real, imaginary;
    public:
        COMPLEX();
        friend istream& operator >> (istream &, COMPLEX &);
        friend ostream& operator << (ostream &, const COMPLEX &);
        COMPLEX operator + (const COMPLEX &);
        COMPLEX operator - (const COMPLEX &);
        COMPLEX operator * (const COMPLEX &);
        COMPLEX operator / (const COMPLEX &);
        bool operator == (const COMPLEX &);
        bool operator != (const COMPLEX &);
};
