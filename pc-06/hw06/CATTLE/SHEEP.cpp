#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "SHEEP.h"

using namespace std;

int SHEEP::GetChildren()
{
    return CATTLE::GetChildren();
}

int SHEEP::GetMilk()
{
    CATTLE::GetMilk();
    srand(time(0));
    int res = rand() % 6;
    return res;
}

void SHEEP::Sounding()
{
    CATTLE::Sounding();
    cout << "cuu cuu cuu...\n";
}
