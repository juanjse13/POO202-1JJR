#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Employee { //Abstract Class
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;

    public:
        //Constructor
        Employee(const string &, const string &, const string &);

        //Sets y Gets
        void setFirstName(const string &);
        string getFirstName() const;
        void setLastName(const string &);
        string getLastName() const;
        void setSocialSecurityNumber(const string &);
        string getSocialSecurityNumber() const;

        //Pure virtual function
        virtual double earnings() const = 0;

        //Virtual function
        virtual void print() const;

};


#endif
