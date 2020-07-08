#pragma once
#include "Element.h"
class C :
    public Element
{
public:
    C(const double&);
    void Feature(); // Đặc điểm
    void HighIndex();
    void LowIndex();
};

