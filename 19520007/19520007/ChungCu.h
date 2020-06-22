#pragma once
#include "CanHo.h"
class ChungCu :
    public CanHo
{
private:
    double phiDichVu;
public:
    void Input();
    void Output();
    double tinhChiPhiNam();
};

