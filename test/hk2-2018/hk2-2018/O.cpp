#include <iostream>

#include "O.h"

using namespace std;

O::O(const double &x)
{
	value = x;
}

void O::Feature()
{
	cout << "San sang trai nghiem (O)\n";
}

void O::HighIndex()
{
	cout << "Thich y tuong moi, hieu biet nhieu linh vuc, thich tu do, khong thich bi rang buoc\n";
}

void O::LowIndex()
{
	cout << "Kha bao thu, kho tiep nhan nhung y tuong moi, la. Thich su on dinh, quen thuoc va thuc te\n";
}
