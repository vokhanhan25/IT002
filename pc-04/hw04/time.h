#include "time-span.h"

class CTime {
    private:
        int h, m ,s;
    public:
        CTime();
        friend istream& operator >>(istream &, CTime &);
        friend ostream& operator <<(ostream &, const CTime &);
        CTime operator+(const int &);
        CTime operator-(const int &);
        CTimeSpan operator-(const CTime &);
        void operator++();
        void operator--();
};