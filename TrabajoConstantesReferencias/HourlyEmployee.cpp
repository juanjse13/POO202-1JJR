#include "HourlyEmployee.h"



HourlyEmployee::HourlyEmployee(const string &first, const string &last, const string &ssn, double hourlyWage, double hoursWorked) :
                Employee(first,last,ssn){
    setWage(hourlyWage);
    setHours(hoursWorked);
}

void HourlyEmployee::setWage(double hourlyWage){
    this -> wage = (hourlyWage < 0.0 ? 0.0 : hourlyWage);
}

double HourlyEmployee::getWage() const{
    return wage;
}

void HourlyEmployee::setHours(double hoursWorked){
    this -> hours = (((hoursWorked >= 0.0) && (hoursWorked <= hoursPerWeek)) ? hoursWorked: 0.0);
}

double HourlyEmployee::getHours() const{
    return hours;
}

double HourlyEmployee::earnings() const{
    if (getHours() <= 40){
        return getWage() * getHours();
    }else{
        return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
    }

}

void HourlyEmployee::print() const{
    cout << "hourly employee: ";
    Employee::print();
    cout << "\n hourly wage: " << getWage() << "; hours worked: " << getHours();
}
