#ifndef account_h
#define account_h

#include <iostream>
#include "account.h"

#include <iostream>
#include <iomanip>

using namespace std;

Account = Account(){
	balance = 0;
}


Account::Account(double bal){
    balance = bal;
}

double Account::getBalance(){
    return balance;
}
void  Account::deposit(double x)
{
   balance =+ x;
}

double account::withdraw (double){
    balance =- x;
}

void Account::printDetails(){
 std::cout<< "balance: " << balance <<std::endl;
} 


Account::Account():Money(balance){
}

Account::makeDeposit(){

	Money m;
	auto sum_deposits =
	std::accumulate(deposits.begin(), deposits.end(),m);

}


Account::makeWithdrawals(){

	Money m;
	auto sum_withdrawals =
	std::accumulate(withdrawals.begin(), withdrawals.end(),m);

}

#endif account_h

