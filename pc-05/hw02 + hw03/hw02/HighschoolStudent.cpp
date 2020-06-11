#include <iostream>
#include "HighschoolStudent.h"

using namespace std;

void HighschoolStudent::Input()
{
	Person::Input();
	cout << "GPA: ";
	cin >> gpa;
	cout << "Da tung bi moi phu huynh?(1/0): ";
	cin >> inventedParents;
}

void HighschoolStudent::Output()
{
	Person::Output();
	cout << "GPA: " << gpa << "\n";
	if (inventedParents)
		cout << "Da tung bi moi phu huynh\n";
	else 
		cout << "Chua tung bi moi phu huynh\n";
	cout << "\n";
}
