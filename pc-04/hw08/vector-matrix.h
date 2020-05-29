#include <iostream>
#define MAXN 1000

using namespace std;

class VECTOR {
    private:
        int n, v[MAXN];
    public:
        VECTOR operator+(const VECTOR &);
        VECTOR operator-(const VECTOR &);
        int operator*(const VECTOR &);
        friend istream& operator>>(istream &, VECTOR &);
        friend ostream& operator<<(ostream &, const VECTOR &);
        friend class MATRIX;
};

class MATRIX {
    private:
        int n, m, a[MAXN][MAXN];
    public:
        MATRIX operator+(const MATRIX &);
        MATRIX operator-(const MATRIX &);
        MATRIX operator*(const MATRIX &);
        friend istream& operator>>(istream &, MATRIX &);
        friend ostream& operator<<(ostream &, const MATRIX &);
        MATRIX operator*(const VECTOR &); 
};




