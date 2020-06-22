#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

void Book::Input()
{
	cout << "Nhap ten sach: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap ten tac gia: ";
	//cin.ignore();;
	getline(cin, author);
}

void Book::Output()
{
	cout << "\nTen sach: " << name << "\n";
	cout << "Tac gia: " << author << "\n";
}
