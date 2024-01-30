#include "company.h"
#include "constants.h"

Company::Company() {
    capital = 1000000;
    next_employee = 0;
    project = new int[MAX_EMPLOYEES];
    next_project = 0;
    project_salaries = new long[MAX_PROJECTS];
    project_profits = new long[MAX_PROJECTS];
}

void Company::createProject(long salary, long profit)
{
    project_salaries[next_project] = salary;
    project_profits[next_project] = profit;
    next_project++;
}

void Company::hireEmployee(int project_num)
{
    project[next_employee] = project_num;
    next_employee++;
}

void Company::setBankAccountNumber(int num) {
    bank_account_number = num;
}