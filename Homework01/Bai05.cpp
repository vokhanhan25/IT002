#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    float math, literature, gpa;
};

void rf(student &st)
{
    getline (cin, st.name);
    cin >> st.math;
    cin >> st.literature;
}

void pr(student &st)
{
    st.gpa = (float) (st.math + st.literature) / 2;
}

void wf(student st)
{
    cout << st.name << endl;
    cout << st.math << endl;
    cout << st.literature << endl;
    cout << st.gpa << endl;
}

int main()
{
    student stu;
    rf(stu);
    pr(stu);
    wf(stu);
}
