#include "Book.h"

#include "NovelBook.h"
#include "Journal.h"
#include "TextBook.h"

#include <iostream>

using namespace std;

int main() {
	int nBook, option;
	Book *arrBook[50];
	cout << "Nhap so luong sach: ";
	cin >> nBook;
	for (int i = 0; i < nBook; i++) {
		cout << "1: Tap chi\n";
		cout << "2: Tieu thuyet\n";
		cout << "3: Sach giao khoa\n";
		cout << "Chon the loai sach can nhap: \n";
		cin >> option;
		switch (option) {
			case 1:
				arrBook[i] = new Journal();
				arrBook[i]->Input();
				break;
			case 2:
				arrBook[i] = new NovelBook();
				arrBook[i]->Input();
				break;
			case 3:
				arrBook[i] = new TextBook();
				arrBook[i]->Input();
				break;
		}
	}
	for (int i = 0; i < nBook; i++)
		arrBook[i]->Output();
}