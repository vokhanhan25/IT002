#include <iostream>
#include "staff.h"
#include "ProductionStaff.h"
#include "OfficeStaff.h"

#define MAXN 50

using namespace std;

int main() {
    ProductionStaff a[MAXN];
    OfficeStaff b[MAXN];
    int n, n1 = 0, n2 = 0;

    cout << "Nhap so nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << "\n";
        int option = 0;
        cout << "Chon 1 de nhap nhan vien san xuat\n";
        cout << "Chon 2 de nhap nhan vien van phong\n";
        cin >> option;

        switch (option) {
        case 1:
            a[n1].Input();
            n1++;
            break;
        case 2:
            b[n2].Input();
            n2++;
            break;
        }
    }

    double sumSalary = 0;
    for (int i = 0; i < n1; i++)
        sumSalary += a[i].GetSalary();

    for (int i = 0; i < n2; i++)
        sumSalary += b[i].GetSalary();

    for (int i = 0; i < n1; i++)
        a[i].Output();

    for (int i = 0; i < n2; i++)
        b[i].Output();

    cout << "Tong luong trong cong ty: " << sumSalary;
}

