#include <iostream>
#include <string>

using namespace std;

class CString {
    private:
        string s;
    public:
        CString();
        CString(const string &s);
        CString(const CString &);
        ~CString();
        friend istream& operator>>(istream &, CString &);
        friend ostream& operator<<(ostream &, const CString &);
        CString operator+(const CString &);
        void operator=(const CString &);
        int Compare(const CString &);
};