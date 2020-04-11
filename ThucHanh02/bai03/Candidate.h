#include "string"

using namespace std;

class Candidate
{
    private:
        long ma, ng, th, ns;
        float toan, van, anh;
        string ten;
    public:
        void rf();
        void wf();
        float getSum();
};

class TestCandidate
{
    private:
        long n;
        Candidate a[1005];
    public:
        void rf();
        void wf();
};

