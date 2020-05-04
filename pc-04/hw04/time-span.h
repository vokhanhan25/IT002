#include <iostream>

using namespace std;

class CTimeSpan {
    private:
        int h, m ,s;
    public:
        CTimeSpan();
        void SetS(const int &);
        void SetM(const int &);
        void SetH(const int &);
        int GetS();
        int GetM();
        int GetH();
        friend istream& operator >>(istream &, CTimeSpan &);
        friend ostream& operator <<(ostream &, const CTimeSpan &);
        CTimeSpan operator+(const CTimeSpan &a);
        CTimeSpan operator-(const CTimeSpan &a);
};