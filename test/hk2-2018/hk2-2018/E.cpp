#include <iostream>

#include "E.h"

using namespace std;

E::E(const double&x) {
	value = x;
}


void E::Feature()
{
	cout << "Huong ngoai\n";
}

void E::HighIndex()
{
	cout << "Nhiet tinh, nang dong, giao tiep tot, thich the hien\n";
}

void E::LowIndex()
{
	cout << "Ngai giao tiep, khong thich su not bat, thich lam viec doc lap\n";
}