class POINT {
    private:
        double x,y;
    
    public:
        void Input();
        void Output();
        POINT();
        POINT(const POINT &);
        POINT (int, int);
        ~POINT();
        void SetX(const int &);
        void SetY(const int &);
        int GetX();
        int GetY();
        void Move(const int &, const int &);
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
        void SetY(const int &);
        int GetX();
        int GetY();
        void Move(const int &, const int &);
        void Rotate(const double &);
        void Zoom (const double &);
};