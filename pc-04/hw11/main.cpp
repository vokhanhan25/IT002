#include "expr.cpp"

int main() {
    CExpr a("10 + 2 * 6");
	cout << "Gia tri cua bieu thuc: " << a.Eval(); 
}