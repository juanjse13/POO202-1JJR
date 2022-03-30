#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include <iostream>
#include "CommissionEmployee.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class BasePlusCommissionEmployee : public CommissionEmployee{
    private:
        double baseSalary;

    public:
        //Constructor
        BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
        //Gets y sets
        void setBaseSalary(double);
        double getBaseSalary() const;
        //Virtual functions
        double earnings() const;
        void print() const;

};


#endif //TRABAJOREFERENCIAS_BASEPLUSCOMMISSIONEMPLOYEE_H
