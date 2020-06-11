#pragma once
#include "CATTLE.h"
class SHEEP :
    public CATTLE
{
public:
    int GetChildren();
    int GetMilk();
    void Sounding();
};

