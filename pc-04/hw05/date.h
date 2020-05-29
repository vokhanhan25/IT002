#include <iostream>

using namespace std;

class CDate {
    private:
        int d, m, y;
    public:
        friend istream& operator>>(istream &, CDate &);
        friend ostream& operator<<(ostream &, const CDate &);
        void operator++();
        void operator--();
        CDate operator+(int );
        CDate operator-(int );
        int operator-(const CDate &);
};


