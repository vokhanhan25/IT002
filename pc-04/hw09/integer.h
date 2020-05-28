#include <iostream>

using namespace std;

class INTEGER {
    private:
        int n;
    public:
        INTEGER();
        INTEGER operator+ (const INTEGER &);
        INTEGER operator- (const INTEGER &);
        INTEGER operator* (const INTEGER &);
        INTEGER operator/ (const INTEGER &);
        INTEGER operator% (const INTEGER &);
        friend istream& operator>>(istream &, INTEGER &a);
        friend ostream& operator<<(ostream &, const INTEGER &a);
};