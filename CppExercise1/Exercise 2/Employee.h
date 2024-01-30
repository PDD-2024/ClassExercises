#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Bank.h"

class Bank;

class Employee
{
private:
    Bank *bank;
    int bankAccountNumber;
public:
    Employee() {};
    ~Employee() {};
    virtual int getAccountBalance();
    virtual int getAccountNumber();
    virtual void setAccountNumber(int accountNumber);
    virtual void setBank(Bank *newBank);
};

#endif