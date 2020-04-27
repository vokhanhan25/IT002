#include "point.h"
#define MAXN 1000

class POLYGON {
    private:
        int n;
        POINT a[MAXN];
    public:
        void Input();
        void Output();
        POLYGON();
        POLYGON(const POLYGON &);
        POLYGON (POINT []);
        ~POLYGON();
        void Move(const double &, const double &);
        void Rotate(const double &);
        void Zoom (const double &);
};