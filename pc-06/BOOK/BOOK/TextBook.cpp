#include "TextBook.h"

void TextBook::Input()
{
	Book::Input();
	cout << "Nhap ten mon hoc cua sach: ";
	//cin.ignore();
	getline(cin, subject);
}

void TextBook::Output()
{
	Book::Output();
	cout << "Ten mon hoc: " << subject << "\n";
}
