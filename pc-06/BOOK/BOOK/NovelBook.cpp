#include "NovelBook.h"

void NovelBook::Input()
{
	Book::Input();
	cout << "Nhap the loai tieu thuyet: ";
	//cin.ignore();
	getline(cin, category);
}

void NovelBook::Output()
{
	Book::Output();
	cout << "The loai tieu thuyet:  " << category << "\n";
}
