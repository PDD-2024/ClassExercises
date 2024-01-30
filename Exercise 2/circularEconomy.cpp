#include "Employee.h"
#include "Company.h"
#include "Bank.h"
#include <iostream>

int main() {
    Employee joey;
    Employee andrea;
    Employee harald;

    Bank bank1;
    Bank bank2;

    Company google(100000, 1000000000, &bank1);    
    Company apple(2000000, 300000000, &bank1);
    Company meta(3000, 400000, &bank2);

    int accountNumber = bank1.createAccount();
    google.setAccountNumber(accountNumber);
    accountNumber = bank1.createAccount();
    apple.setAccountNumber(accountNumber);
    accountNumber = bank2.createAccount();
    meta.setAccountNumber(accountNumber);

    std::cout << "Google account #: " << google.getAccountNumber() << std::endl;
    std::cout << "Apple account #: " << apple.getAccountNumber() << std::endl;
    std::cout << "Meta account #: " << meta.getAccountNumber() << std::endl;

    google.addEmployee(&joey);
    apple.addEmployee(&harald);
    meta.addEmployee(&andrea);

    accountNumber = bank1.createAccount();
    joey.setBank(&bank1);
    joey.setAccountNumber(accountNumber);

    accountNumber = bank1.createAccount();
    harald.setBank(&bank1);
    harald.setAccountNumber(accountNumber);

    accountNumber = bank2.createAccount();
    andrea.setBank(&bank2);
    andrea.setAccountNumber(accountNumber);

    std::cout << "Joey account #: " << joey.getAccountNumber() << std::endl;
    std::cout << "Harald account #: " << harald.getAccountNumber() << std::endl;
    std::cout << "Andrea account #: " << andrea.getAccountNumber() << std::endl;

    bank1.extendCredit(&joey, 1000000);
    bank1.extendCredit(&harald, 1000000);
    bank2.extendCredit(&andrea, 1000000);

    google.executeMonthlyPayouts();
    apple.executeMonthlyPayouts();
    meta.executeMonthlyPayouts();

    int joeyBalance = joey.getAccountBalance();
    int haraldBalance = harald.getAccountBalance();
    int andreaBalance = andrea.getAccountBalance();

    std::cout << "Joey balance: " << joeyBalance << std::endl;
    std::cout << "Harald balance: " << haraldBalance << std::endl;
    std::cout << "Andrea balance: " << andreaBalance << std::endl;

    return 0;
}