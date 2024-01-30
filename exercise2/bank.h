#ifndef BANK_H
#define BANK_H

class Bank 
{
    long liquidity;
    long *customers;
    public:
        Bank();
        void extendCredit(int id);
        void deposit(int id, long amount);
        void transfer(int sender_id, int recipient_id, long amount);
        long getLiquidity();
        long getbalance(int id);
};

#endif