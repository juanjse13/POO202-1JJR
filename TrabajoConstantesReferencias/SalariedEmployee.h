#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class SalariedEmployee : public Employee {
    private:
        double weeklySalary;

    public:
        //Constructor
        SalariedEmployee(const string &, const string &, const string &, double = 0.0);

        //Gets and Sets
        void setWeeklySalary(double);
        double getWeeklySalary() const;

        //Virtual functions
        double earnings() const;
        void print() const;


};


#endif
