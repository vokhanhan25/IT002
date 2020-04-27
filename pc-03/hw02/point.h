class POINT
{
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
        void SetXY (const double &, const double &);
        double GetX();
        double GetY();
        void Move(const double &, const double &);
        void Rotate(const double &);
        double GetDistance(const POINT &);
};