#pragma once
class Element
{
protected:
    double value;
public:
    Element();
    double GetValue();
    virtual void Feature() = 0; // Đặc điểm
    virtual void HighIndex() = 0;
    virtual void LowIndex() = 0;
};

