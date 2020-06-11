#include "STAFF.h"

class OfficeStaff :public STAFF {
private:
    int numberOfWorkingDays;
public:
    OfficeStaff();
    ~OfficeStaff();
    double GetSalary();
    void Input();
    void Output();
};