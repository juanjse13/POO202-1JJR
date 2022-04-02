#include "DailyEmployee.h"


DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, int workedDays, double dailyWage)
                : Employee(first, last, ssn){
    setDailyWage(dailyWage);
    setWorkedDays(workedDays);
}

int DailyEmployee::getWorkedDays() const{
    return workedDays;
}

void DailyEmployee::setWorkedDays(const int &workedDays){
    this -> workedDays = workedDays;
}

int DailyEmployee::getDailyWage() const{
    return dailyWage;
}

void DailyEmployee::setDailyWage(const double &dailyWage){
    this -> dailyWage = dailyWage;
}

double DailyEmployee::earnings() const{
    if (getWorkedDays() > 0){
        return getDailyWage() * getWorkedDays();
    }else{
        return 0;
    }
}

void DailyEmployee::print() const{
    cout << "daily employee: ";
    Employee::print();
    cout << "\n daily wage: " << getDailyWage() << "; days worked: " << getWorkedDays();
}

