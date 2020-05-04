#include <iostream>

using namespace std;

class CTimeSpan {
    private:
        int h, m ,s;
    public:
        CTimeSpan();
        CTimeSpan(const int &, const int &, const int &);
        CTimeSpan (const CTimeSpan &);
        ~CTimeSpan();
        friend istream& operator >>(istream &, CTimeSpan &);
        friend ostream& operator <<(ostream &, const CTimeSpan &);
        CTimeSpan operator +(const CTimeSpan &a);
        CTimeSpan operator -(const CTimeSpan &a);
};