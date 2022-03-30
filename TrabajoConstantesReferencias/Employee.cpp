#include "Employee.h"


Employee::Employee(const string &first, const string &last, const string &ssn) : firstName(first), lastName(last),
                    socialSecurityNumber(ssn){
}

void Employee::setFirstName(const string &first){
    this -> firstName = first;
}

string Employee::getFirstName() const{
    return this -> firstName;
}

void Employee::setLastName(const string &last){
    this -> lastName = last;
}

string Employee::getLastName() const{
    return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn){
    this -> socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void Employee::print() const{
    cout << getFirstName() << ' ' << getLastName() << "\n social security number: " << getSocialSecurityNumber();
}

