#include <iostream>
#include "CollegeStudent.h"

using namespace std;

void CollegeStudent::Input()
{
	Person::Input();
	cout << "GPA: ";
	cin >> gpa;
	cout << "Da tung rot mon?(1/0): ";
	cin >> failedSubject;
}

void CollegeStudent::Output()
{
	Person::Output();
	cout << "GPA: " << gpa << "\n";
	if (failedSubject)
		cout << "Da tung rot mon\n";
	else
		cout << "Chua tung rot mon\n";
	cout << "\n";
}
