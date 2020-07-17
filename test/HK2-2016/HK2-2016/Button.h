#pragma once
#include <string>
#include <iostream>
#include "ThanhPhan.h"

using namespace std;

class Button :
    public ThanhPhan
{
private:
    string diaChiHinhAnh;
public:
    void Nhap();
};

