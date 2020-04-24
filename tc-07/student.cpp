#include <iostream>
#include <string>

using namespace std;

class STUDENT {
    private:
        string id, name;
        int math, literature;

    public:
        void Input();
        void Output();
};

void STUDENT::Input() {
    cout << "NHAP TEN SINH VIEN: ";
    getline(cin, name);

    cout <<"NHAP MA SO SINH VIEN: ";
    fflush(stdin);
    getline(cin, id);

    cout << "DIEM TOAN = ";
    cin >> math;

    cout <<"DIEM VAN = ";
    cin >> literature;
}

void STUDENT::Output() {
    cout << "SINH VIEN " + name << "\n";
    cout << "MA SO SINH VIEN: " + id << "\n";
    cout << "DIEM TOAN = " << math << "\n";
    cout << "DIEM VAN = " <<literature << "\n\n";
}

int main() {
    STUDENT a;
    a.Input();
    a.Output();
}