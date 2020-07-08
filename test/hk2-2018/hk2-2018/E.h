#pragma once
#include "Element.h"
class E :
    public Element
{
public:
    E(const double& x);
    void Feature(); //Đặc điểm
    void HighIndex();
    void LowIndex();
};

