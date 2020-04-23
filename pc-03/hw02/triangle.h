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
        double GetX();
        double GetY();
        void Move(const double &, const double &);
        void Rotate(const double &);
};

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
        void SetX(const int &);
        void SetY(const double &);
        double GetX();
        double GetY();
        void Move(const double &, const double &);
        void Rotate(const double &);
        void Zoom (const double &);
};