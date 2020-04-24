#define MAXN 1000

class POLYNOMIAL {
    private:
        int n;
        double coefficient[MAXN];

    public:
        void Input();
        void Output();
        int Compare(const POLYNOMIAL &);
        POLYNOMIAL Add (const POLYNOMIAL &);
        POLYNOMIAL Subtract (const POLYNOMIAL &);
        POLYNOMIAL Multiply (const POLYNOMIAL &);
        POLYNOMIAL Derivative();
        POLYNOMIAL Privitive();
};