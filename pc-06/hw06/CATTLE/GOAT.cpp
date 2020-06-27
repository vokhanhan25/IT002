#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "GOAT.h"

using namespace std;

int GOAT::GetChildren()
{
    return CATTLE::GetChildren();
}

int GOAT::GetMilk()
{
    CATTLE::GetMilk();
    srand(time(0));
    int res = rand() % 11;
    return res;
}

void GOAT::Sounding()
{
    CATTLE::Sounding();
    cout << "de de de...\n";
}
