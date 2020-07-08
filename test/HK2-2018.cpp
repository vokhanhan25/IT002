#include <iostream>

using namespace std;

class Element {
    private: 
        double value;
    public:
        double GetValue();
        virtual void Feature() = 0; // Đặc điểm
        virtual void HighIndex() = 0;
        virtual void LowIndex() = 0;
};

class Person {
    private:
        Element *arrElement[5];
    public:
        void Input();
        void Character();
        void Risk();
};

class O: public Element {
    public:
        O();
        O(const double & );
        void Feature(); // Đặc điểm
        void HighIndex();
        void LowIndex();
};

class C: public Element {
    public:
        C(const int & );
        void Feature(); // Đặc điểm
        void HighIndex();
        void LowIndex();
};

class E: public Element {
    public:
        E(const int & );
        void Feature(); // Đặc điểm
        void HighIndex();
        void LowIndex();
};

class A: public Element {
    public:
        A(const int & );
        void Feature(); // Đặc điểm
        void HighIndex();
        void LowIndex();
};

class N: public Element {
    public:
        N(const int & );
        void Feature(); // Đặc điểm
        void HighIndex();
        void LowIndex();
};

O::O () {

}

O::O (const double &x) {
    value = x;
}


int main() {

}