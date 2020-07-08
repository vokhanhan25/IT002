#include <iostream>

#include "A.h"

using namespace std;

A::A(const double& x) {
	value = x;
}

void A::Feature()
{
	cout << "Hoa dong de chiu\n";
}

void A::HighIndex()
{
	cout << "Than thien, coi mo, dong cam voi moi nguoi, thieu chinh kien\n";
}

void A::LowIndex()
{
	cout << "Dat loi ich cua ban than len tren, it dong cam, it chia se, tinh canh tranh cao\n";
}
