#include "Bank.h"
#include <iostream>

void Bank::extendCredit(Employee *employee, int amount) {
    if (amount > liquidity) {
        return;
    }

    liquidity -= amount;
    accounts[employee->getAccountNumber()] += amount;
};

void Bank::transferMoney(Company *company, Employee *employee, int amount) {
    accounts[company->getAccountNumber()] -= amount;
    accounts[employee->getAccountNumber()] += amount;
};

int Bank::createAccount() {
    accounts.push_back(0);
    return accounts.size()-1;
};

int Bank::getAccountBalance(int accountNumber) {
    return accounts[accountNumber];
};