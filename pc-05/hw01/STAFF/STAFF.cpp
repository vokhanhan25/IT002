#include "staff.h"
#include <iostream>

using namespace std;

STAFF::STAFF() {

}

STAFF::~STAFF() {

}

void STAFF::Input() {
    cout << "Nhap ho ten: ";
    cin.ignore();
    cin.getline(name, 50, '\n');

    cout << "Nhap ngay thang nam sinh: ";
    cin.getline(dataOfBirth, 50, '\n');
}

void STAFF::Output() {
    cout << "Ho ten: " << name << "\n";
    cout << "Ngay thang nam sinh: " << dataOfBirth << "\n";
}

double STAFF::GetSalary() {
    return 0.0f;
}