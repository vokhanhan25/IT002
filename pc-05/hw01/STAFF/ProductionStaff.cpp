#include <iostream>
#include "ProductionStaff.h"

using namespace std;

ProductionStaff::ProductionStaff() {

}

ProductionStaff::~ProductionStaff() {

}

void ProductionStaff::Input() {
    STAFF::Input();
    cout << "Nhap luong co ban: ";
    cin >> basicSalary;

    cout << "Nhap so san pham: ";
    cin >> numberOfProducts;
}

void ProductionStaff::Output() {
    STAFF::Output();
    cout << "Luong: " << salary << "\n";
    cout << "\n";
}

double ProductionStaff::GetSalary() {
    STAFF::GetSalary();
    salary = basicSalary + numberOfProducts * 5000;
    return salary;
}