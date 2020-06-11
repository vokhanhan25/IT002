#include <iostream>
#include "OfficeStaff.h"

using namespace std;

OfficeStaff::OfficeStaff() {

}

OfficeStaff::~OfficeStaff() {

}

void OfficeStaff::Input() {
    STAFF::Input();
    cout << "Nhap so ngay lam viec: ";
    cin >> numberOfWorkingDays;
}

void OfficeStaff::Output() {
    STAFF::Output();
    cout << "Luong: " << salary << "\n";
    cout << "\n";
}

double OfficeStaff::GetSalary() {
    STAFF::GetSalary();
    salary = numberOfWorkingDays * 100;
    return salary;
}