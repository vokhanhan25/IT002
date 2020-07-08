#include <iostream>

#include "C.h"

using namespace std;

C::C(const double& x) {
	value = x;
}

void C::Feature()
{
	cout << "Tu chu tan tam\n";
}

void C::HighIndex()
{
	cout << "Cham chi, co kha nang chiu ap luc tot, gan bo, trung thanh voi to chuc\n";
}

void C::LowIndex()
{
	cout << "De bo cuoc, chiu ap luc va tuan thu ky luat kem\n";
}
