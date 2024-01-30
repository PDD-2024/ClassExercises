#include "Company.h"
#include <iostream>

int Company::getCapital() {
    return capital;
};

int Company::getAccountNumber() {
    return bankAccountNumber;
};

std::vector<Employee*> Company::getEmployees() {
    return employees;
};

void Company::addEmployee(Employee *employee) {
    employees.push_back(employee);
};

void Company::executeMonthlyPayouts() {
    capital += monthlyProfit;
    for (int i = 0; i < employees.size(); i++) {
        bank->transferMoney(this, employees[i], salary);
    }
};

void Company::setAccountNumber(int accountNumber) {
    bankAccountNumber = accountNumber;
};