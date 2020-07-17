#pragma once
#include "BloodGroup.h"
class O :
    public BloodGroup
{
public:
    bool CheckGenetic(const char &, const char &);
    char GetName();
    bool GiveBlood(const char &, const bool &);
};

