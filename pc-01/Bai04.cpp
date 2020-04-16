#include <iostream>

using namespace std;

struct date
{
    int d, m, y;
};

void rf(date &a)
{
    cin >> a.d >> a.m >> a.y;
}

bool checkNhuan(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return true;
    return false;
}

bool checkHopLe(date &a)
{
    if (a.m > 12 || a.m < 1)
        return false;

    if (checkNhuan(a.y))
    {
        if (a.m == 2 && (a.d < 1 || a.d > 29))
            return false;
    }

    else {
        if (a.m == 2 && (a.d < 1 || a.d > 28))
            return false;
    }

    if ((a.m == 1 || a.m == 3 || a.m == 5 || a.m == 7 || a.m == 8|| a.m == 10) && (a.d > 31 || a.d < 1))
        return false;

    if ((a.m == 4 || a.m == 6 || a.m == 9|| a.m == 11) && (a.d > 30 || a.d < 1))
        return false;

    return true;
}

void pr(date &a)
{
	if(checkNhuan(a.y))
	{
		if(a.m == 2)
		{
			if(a.d == 29 )
			{
				a.d = 1;
				a.m = 3;
			}
			else a.d ++;
		}
		else if(a.m == 1 || a.m == 3 || a.m == 5 || a.m == 7 || a.m == 8|| a.m == 10)
		{
			if(a.d == 31 )
			{
				a.d = 1;
				a.m ++;
			}
			else a.d ++;
		}
		else if(a.m == 4 || a.m == 6 || a.m == 9|| a.m == 11 )
			if(a.m == 30)
			{
				a.d = 1;
				a.m ++;
			}
			else a.d ++;
		else
		{
			if(a.d == 31)
			{
				a.y ++;
				a.d = 1;
				a.m = 1;
			}
		}
	}
	else
	{
		if(a.m == 2)
		{
			if(a.d == 28 )
			{
				a.d = 1;
				a.m = 3;
			}
			else a.d ++;
		}
		else if(a.m == 1 || a.m == 3 || a.m == 5 || a.m == 7 || a.m == 8 || a.m == 10)
		{
			if(a.d == 31 )
			{
				a.d = 1;
				a.m++;
			}
			else a.d ++;
		}
		else if(a.m == 4 || a.m == 6 || a.m == 9|| a.m == 11 )
        {
			if (a.d == 30)
			{
				a.d = 1;
				a.m ++;

			}
			else a.d ++;
        }
		else
		{
			if(a.d == 31)
			{
				a.y ++;
				a.d = 1;
				a.m = 1;
			}
		}
	}
}

void wf (date a)
{
    cout << a.d << " " << a.m << " " << a.y;
}


int main()
{
    date a;
    rf(a);
    if (checkHopLe(a))
    {
        pr(a);
        wf(a);
    }
    else cout << "NGAY NHAP VAO KHONG HOP LE";
}
