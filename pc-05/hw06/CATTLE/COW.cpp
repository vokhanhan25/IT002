#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "COW.h"

using namespace std;

int COW::GetChildren()
{  
    return CATTLE::GetChildren();
}

int COW::GetMilk()
{
    CATTLE::GetMilk();
    srand(time(0));
    int res = rand() % 21;
    return res;
}

void COW::Sounding()
{
    CATTLE::Sounding();
    cout << "bo bo bo...\n";
}
