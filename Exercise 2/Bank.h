#ifndef BANK_H
#define BANK_H

#include "EnterpriseConstants.h"
#include "Company.h"
#include "Employee.h"
#include <vector>

class Company;
class Employee;

class Bank
{
private:
    int liquidity;
    int bankAccountNumber;
    std::vector<int> accounts; // Each element in this vector represents the balance of an account
public:
    Bank() : liquidity(START_LIQUIDITY) {};
    ~Bank() {};
    virtual void extendCredit(Employee *employee, int amount);
    virtual void transferMoney(Company *company, Employee *employee, int amount);
    virtual int createAccount();
    virtual int getAccountBalance(int accountNumber);
};

#endif