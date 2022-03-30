#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class HourlyEmployee : public Employee {
    private:
        double wage;
        double hours;
    public:
        static const int hoursPerWeek = 168;
        //Constructor
        HourlyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
        //Sets and Gets
        void setWage(double);
        double getWage() const;
        void setHours(double);
        double getHours() const;
        //Virtual functions
        double earnings() const;
        void print() const;




};


#endif
