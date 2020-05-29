#include <bits/stdc++.h>

using namespace std;
class CExpr {
    private:
 	    string expr;

    public:
        CExpr();
        CExpr(const string &);
        ~CExpr();
        double Eval();
 };
