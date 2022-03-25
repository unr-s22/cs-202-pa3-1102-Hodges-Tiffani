#include "account.h"
#ifndef account_h
#define account_h
#include <iostream>
#include <iomanip>

using namespace std;

Account = Account(){
balance = 0;
}
Account::Account(double bal){
    balance= bal;
}

double Account::getBalance(){
    return balance;
}
void  Account::deposit(double x)
{
   balance =+ x;
}

double account::withdraw (double)
{
    balance =- x;
}
void Account::printDetails(){
 std::cout<< "  balance: " << balance <<std::endl;
} 

#endif account_h