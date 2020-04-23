#define MAXN 1000

class POINT {
    private:
        double x,y;
    
    public:
        void Input();
        void Output();
        POINT();
        POINT(const POINT &);
        POINT (double, double);
        ~POINT();
        void SetX(const double &);
        void SetY(const double &);
        int GetX();
        int GetY();
        void Move(const double &, const double &);
        void Rotate(const double &);
};

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