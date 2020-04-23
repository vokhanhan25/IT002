#include <iostream>
#include "IntegerArray.h"

using namespace std;

IntegerArray::IntegerArray (int iLength) {
    if (iLength < 0) {
        cout << "KHONG HOP LE!\n";
        return;
    }
    m_iLength = iLength;
    m_pElement = new int[m_iLength];
}

int IntegerArray::GetLength() {
    return m_iLength;
}

int &IntegerArray::ElementAt(int iIndex) {
    if (iIndex < 0 || iIndex >= m_iLength) {
        cout << "Khong hop le\n";
    }

    return m_pElement[iIndex];
}

int &IntegerArray::operator [] (int iIndex) {
    return ElementAt(iIndex);
}

IntegerArray::~IntegerArray() {
    if (m_pElement != NULL)
        delete []m_pElement;
}

IntegerArray::IntegerArray(const IntegerArray &x) {
    m_iLength = x.m_iLength;
    m_pElement = new int [m_iLength];
    for (int i = 0; i < m_iLength; i++)
        m_pElement[i] = x.m_pElement[i];
}

IntegerArray &IntegerArray::operator= (const IntegerArray &x) {
    m_iLength = x.m_iLength;
    m_pElement = new int [m_iLength];
    for (int i = 0; i < m_iLength; i++) {
        m_pElement[i] = x.m_pElement[i];
    }
    return *this;
}

