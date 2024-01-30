#include "Employee.h"

int Employee::getAccountBalance() {
    return bank->getAccountBalance(bankAccountNumber);
};

int Employee::getAccountNumber() {
    return bankAccountNumber;
};

void Employee::setAccountNumber(int accountNumber) {
    bankAccountNumber = accountNumber;
};

void Employee::setBank(Bank *newBank) {
    bank = newBank;
};