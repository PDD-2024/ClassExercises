#include "bank.h"
#include "company.h"
#include "constants.h"
#include <iostream>

int main() {
    // Create bank
    Bank b;
    // Create company and open a bank account (account #0)
    Company c;
    c.setBankAccountNumber(0);
    b.deposit(c.bank_account_number,c.capital);
    // Create 2 projects (with different salaries)
    c.createProject(20000,200000);
    c.createProject(50000,500000);
    // Hire 4 employees (2 for each project)
    c.hireEmployee(0);
    c.hireEmployee(0);
    c.hireEmployee(1);
    c.hireEmployee(1);
    // Employees create a bank account and request their credits
    for (int i=1; i<MAX_EMPLOYEES+1; i++) {
        b.extendCredit(i);
    }

    // Set up is done, print current values
    std::cout << "Bank:       " << b.getLiquidity() << std::endl;
    std::cout << "Company:    " << b.getbalance(0) << std::endl;
    for (int i=0; i<MAX_EMPLOYEES; i++) {
        std::cout << "Employee " << i << ": " << b.getbalance(i+1) << std::endl;
    }

    // 12 month simulation
    std::cout << std::endl;
    for (int i=0; i<12; i++) {
        std::cout << "month " << i << std::endl;
        // Company makes profit from projects
        for (int j=0; j<MAX_PROJECTS; j++) {
            b.deposit(c.bank_account_number,c.project_profits[j]);
        }
        // Employees get salaries from company based on projects
        for (int j=0; j<MAX_EMPLOYEES; j++) {
            b.transfer(c.bank_account_number,j+1,c.project_salaries[c.project[j]]);
        }
    }
    std::cout << std::endl;

    // Simulation is done, print ending values
    std::cout << "Bank:       " << b.getLiquidity() << std::endl;
    std::cout << "Company:    " << b.getbalance(0) << std::endl;
    for (int i=0; i<MAX_EMPLOYEES; i++) {
        std::cout << "Employee " << i << ": " << b.getbalance(i+1) << std::endl;
    }
}
