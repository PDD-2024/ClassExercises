#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include "Bank.h"
#include <vector>

class Employee;
class Bank;

class Company
{
private:
    std::vector<Employee*> employees;
    Bank *bank;
    int bankAccountNumber;
    int capital;
    int salary;
    int monthlyProfit;
public:
    Company(int salary, int monthlyProfit, Bank *bank) : salary(salary), monthlyProfit(monthlyProfit), bank(bank), capital(STARTING_CAPITAL) {};
    ~Company() {};
    virtual int getCapital();
    virtual std::vector<Employee*> getEmployees();
    virtual void addEmployee(Employee *employee);
    virtual void executeMonthlyPayouts();
    virtual int getAccountNumber();
    virtual void setAccountNumber(int accountNumber);
};

#endif