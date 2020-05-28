#include "time-span.h"

class CTime {
    private:
        int h, m ,s;
    public:
        CTime();
        friend istream& operator >>(istream &, CTime &);
        friend ostream& operator <<(ostream &, const CTime &);
        void operator+(const int &);
        void operator-(const int &);
        CTimeSpan operator-(const CTime &);
        void operator++();
        void operator--();
};