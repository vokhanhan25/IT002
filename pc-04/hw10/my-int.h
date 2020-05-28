#include <iostream>

using namespace std;

class MyInt {
    private:
        int n;
    public:
        MyInt();
        MyInt operator+ (const MyInt &);
        MyInt operator- (const MyInt &);
        MyInt operator* (const MyInt &);
        MyInt operator/ (const MyInt &);
        MyInt operator% (const MyInt &);
        friend istream& operator>>(istream &, MyInt &a);
        friend ostream& operator<<(ostream &, const MyInt &a);
};