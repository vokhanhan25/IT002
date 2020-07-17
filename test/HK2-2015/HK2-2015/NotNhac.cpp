#include <iostream>

#include "NotNhac.h"

using namespace std;

void NotNhac::Nhap()
{
	KyTuAmNhac::Nhap();
	cout << "\n1.Do(C), 2.Re(D), 3.Mi(E), 4.Fa(F)\n";
	cout << "5.Sol(G), 6.La(A), 7.Si(B)\n";
	cout << "Nhap lua chon cua ban: ";
	cin >> caoDo;
}

int NotNhac::LayCaoDo()
{
	return caoDo;
}

