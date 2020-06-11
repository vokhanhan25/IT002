#include "STAFF.h"

class ProductionStaff :public STAFF {
private:
    double basicSalary;
    int numberOfProducts;
public:
    ProductionStaff();
    ~ProductionStaff();
    double GetSalary();
    void Input();
    void Output();
};