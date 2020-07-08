#include <iostream>

#include "N.h"

using namespace std;

N::N(const double&x) {
	value = x;
}

void N::Feature()
{
	cout << "Bat on cam xuc\n";
}

void N::HighIndex()
{
	cout << "Thuong co cam xuc tieu cuc, chiu ap luc kem\n";
}

void N::LowIndex()
{
	cout << "Kiem soat duoc kiem xuc, ung pho voi cang thang tot, it bi ben ngoai anh huong den tam trang\n";
}
