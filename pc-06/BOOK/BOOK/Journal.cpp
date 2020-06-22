#include "Journal.h"

void Journal::Input()
{
	Book::Input();
	cout << "Nhap the loai tap chi: ";
	//cin.ignore();
	getline(cin, field);
}

void Journal::Output()
{
	Book::Output();
	cout << "The loai tap chi: " << field << "\n";
}
