#ifndef DAILYEMPLOYEE_H
#define DAILYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;


class DailyEmployee: public Employee{
    private:
        int workedDays;
        double dailyWage;

    public:
        //Constructor
        DailyEmployee(const string &, const string &, const string &, int, double = 0.0);

        //Gets and Sets
        int getWorkedDays() const;
        void setWorkedDays(const int &);
        int getDailyWage() const;
        void setDailyWage(const double &);

        //Virtual functions
        double earnings() const;
        void print() const;


};


#endif
