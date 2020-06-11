#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "CATTLE.h"

using namespace std;

int CATTLE::GetChildren()
{
	srand(time(0));
	int res = rand() % 100;
	return res;
}

int CATTLE::GetMilk()
{
	return 0;
}

void CATTLE::Sounding()
{
}
