#pragma once

#include "Point.h"

class Polygon
{
protected:
	Point a[1000];
public:
	int n;
	void Input();
	void Output();
	void Move(const double&, const double&);
	void Rotate(const double&);
	void Zoom(const double&);
};

