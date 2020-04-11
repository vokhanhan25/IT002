#include "Candidate.h"
#include <string>
#include "iostream"

using namespace std;

void Candidate::rf()
{
    cout << "Nhap ma so: ";
    cin >> ma;

    cout << "Nhap ho & ten: ";
    fflush(stdin);
    getline (cin, ten);

    cout << "Nhap ngay sinh: ";
    cin >> ng;

    cout << "Nhap thang sinh: ";
    cin >> th;

    cout << "Nhap nam sinh: ";
    cin >> ns;

    cout << "Nhap diem toan = ";
    cin >> toan;

    cout << "Nhap diem van = ";
    cin >> van;

    cout << "Nhap diem anh = ";
    cin >> anh;
}

void Candidate::wf()
{
    cout << "Ma so: " << ma << endl;
    cout << "Ho va ten: " << ten << endl;
    cout << "Ngay thang nam sinh: " << ng << "/" << th << "/" << ns << endl;
    cout << "Diem toan = " << toan << endl;
    cout << "Diem van = " << van << endl;
    cout << "Diem anh = " << anh << endl;
}

float Candidate::getSum()
{
    return toan + van + anh;
}

void TestCandidate::rf()
{
    cout << "SO LUONG THI SINH = ";
    cin >> n;
    for (long i = 0; i < n; i++) 
    {
        a[i].rf();
        cout << endl;
    }
}

void TestCandidate::wf()
{
    cout << "DANH SACH THI SINH CO TONG DIEM > 15" << endl;
    for (long i = 0; i < n; i++)
        if (a[i].getSum() > 15)
        {
            a[i].wf();
            cout << endl;
        }
}