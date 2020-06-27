#pragma once

class Point
{
private:
    double x, y;

public:
    void Input();
    void Output();
    void SetX(const double&);
    void SetY(const double&);
    double GetX();
    double GetY();
    void Move(const double&, const double&);
    void Rotate(const double&);
    double GetDistance(const Point&);
};