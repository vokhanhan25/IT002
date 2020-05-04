#include "time-span.h"

class CTime {
    private:
        int h, m ,s;
    public:
        CTime();
        friend istream& operator >>(istream &, CTime &);
        friend ostream& operator <<(ostream &, const CTime &);
        CTime operator+(const CTime &);
        CTimeSpan operator-(const CTime &);
        CTime operator++();
        CTime operator--();
};