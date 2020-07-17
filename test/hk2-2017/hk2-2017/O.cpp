#include "O.h"

bool O::CheckGenetic(const char &mom, const char &child)
{
    if ((mom == 'A') && (child == 'A' || child == 'O'))
        return true;
    if ((mom == 'B') && (child == 'B' || child == 'O'))
        return true;
    if ((mom == 'A') && (child == 'A' || child == 'B'))
        return true;
    if ((mom == 'O') && (child == 'O'))
        return true;
    return false;
}

char O::GetName()
{
    return 'O';
}

bool O::GiveBlood(const char&bl, const bool&r)
{
    if (rh) {
        if (bl == 'O')
            return true;
    } 
    else {
        if (bl == 'O' && !r)
            return false;
    }
}
