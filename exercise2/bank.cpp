#include "bank.h"
#include "constants.h"
#include <iostream>

Bank::Bank()
{
    liquidity = 20000000;
    customers = new long[MAX_CUSTOMERS];
    for (int i=0; i<MAX_CUSTOMERS; i++) {
        customers[i] = 0;
    }
}

void Bank::extendCredit(int id)
{
    liquidity -= 1000000;
}

void Bank::deposit(int id, long amount) 
{
    customers[id] += amount;
}

void Bank::transfer(int sender_id, int recipient_id, long amount) 
{
    customers[sender_id] -= amount;
    customers[recipient_id] += amount / 2;
    liquidity += amount / 2;
}

long Bank::getLiquidity() {
    return liquidity;
}

long Bank::getbalance(int id) {
    return customers[id];
}