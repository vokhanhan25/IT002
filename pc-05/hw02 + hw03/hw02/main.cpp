#include <iostream>

#include "Person.h"
#include "Artists.h"
#include "CollegeStudent.h"
#include "HighschoolStudent.h"
#include "Singer.h"
#include "Worker.h"

using namespace std;



int main() {
	
	Artists arrArtists[10];
	CollegeStudent arrCollegeStudent[10];
	HighschoolStudent arrHighshoolStudent[10];
	Singer arrSinger[10];
	Worker arrWorker[10];
	int n, nArtists = 0, nCollegeStudent = 0, nHighchoolStudent = 0, nSinger = 0, nWorker = 0;
	cout << "Nhap so luong nguoi: ";
	cin >> n;

	cout << "Nhap thong tin tung nguoi\n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap nguoi thu " << i + 1 << "\n";
		cout << "1: Nghe si\n";
		cout << "2: Sinh vien\n";
		cout << "3: Hoc sinh\n";
		cout << "4: Ca si\n";
		cout << "5: Cong nhan\n";
		
		cout << "\nNhap lua chon: ";
		int option;
		cin >> option;
		switch (option) {
			case 1:
				arrArtists[nArtists].Input();
				nArtists++;
				break;
			case 2:
				arrCollegeStudent[nCollegeStudent].Input();
				nCollegeStudent++;
				break;
			case 3:
				arrHighshoolStudent[nHighchoolStudent].Input();
				nHighchoolStudent++;
				break;
			case 4:
				arrSinger[nSinger].Input();
				nSinger++;
				break;
			case 5:
				arrWorker[nWorker].Input();
				nWorker++;
				break;
		}
	}

	for (int i = 0; i < nArtists; i++)
		arrArtists[i].Output();

	for (int i = 0; i < nCollegeStudent; i++)
		arrCollegeStudent[i].Output();

	for (int i = 0; i < nHighchoolStudent; i++)
		arrHighshoolStudent[i].Output();

	for (int i = 0; i < nSinger; i++)
		arrSinger[i].Output();

	for (int i = 0; i < nWorker; i++)
		arrWorker[i].Output();
}