class POINT
{
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
};