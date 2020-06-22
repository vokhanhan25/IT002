#pragma once
#include <iostream>
#include <string>

using namespace std;

class CanHo
{
protected:
	string diaChi;
	double tienDatCoc, tienThueThang, chiPhiNam;
	int ngayThue;
public:
	void Input();
	void Output();
	double tinhChiPhiNam();
};

