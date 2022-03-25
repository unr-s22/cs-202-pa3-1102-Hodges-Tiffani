#include "account.h"
<<<<<<< HEAD
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
=======

Account::Account():Money(){
}
>>>>>>> 33a00e233c449d71739b19a5d3264556309df069
