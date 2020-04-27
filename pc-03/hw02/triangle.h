#include "point.h"
class TRIANGLE {
    private:
        POINT a, b, c;
    public:
        void Input();
        void Output();
        TRIANGLE();
        TRIANGLE(const TRIANGLE &);
        TRIANGLE (POINT, POINT, POINT);
        ~TRIANGLE();
        void Move(const double &, const double &);
        void Rotate(const double &);
        void Zoom (const double &);
};