#include <iostream>

using namespace std;

class point
{
    private:
        float x,y;
    
    public:
        void rf();
        void wf();
        bool check(point);
};

void point::rf()
{
    cin >> x >> y;
}

void point::wf()
{
    cout << x << " " << y << endl;
}

bool point::check(point t)
{
    if (x == t.x && y == t.y)
        return true;
    return false;
}

int main()
{
    point a,b;
    a.rf();
    b.rf();
    a.wf();
    b.wf();
    if (a.check(b))
        cout << "Trung nhau" << endl;
    else cout << "Khong trung nhau" << endl;
}