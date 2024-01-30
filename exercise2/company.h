#ifndef COMPANY_H
#define COMPANY_H

class Company
{
    int next_employee;
    int next_project;
    public:
        int bank_account_number;
        long capital;
        int *project;
        long *project_salaries;
        long *project_profits;
        Company();
        void createProject(long salary, long profit);
        void hireEmployee(int project);
        void setBankAccountNumber(int num);
};

#endif