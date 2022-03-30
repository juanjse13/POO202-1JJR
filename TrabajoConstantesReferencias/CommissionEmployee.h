#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class CommissionEmployee : public Employee {
    private:
        double grossSales;
        double commissionRate;

    public:
        //Constructor
        CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
        //Gets y Sets
        void setCommissionRate(double);
        double getCommissionRate() const;
        void setGrossSales(double);
        double getGrossSales() const;
        //Virtual functions
        double earnings() const;
        void print() const;

};


#endif
