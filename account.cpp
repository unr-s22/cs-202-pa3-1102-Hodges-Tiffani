#include <iostream>
#include <vector>
#include "account.h"


//friend function used to override the << operator and print the account's information
std::ostream& Account::operator<<(std::ostream& output, const Account& account){

	//print statements for inital information on account
	std::output<<"Account Details"<<std::endl;
	std::output<<"--------------------------"<<std::endl;
	std::output<<"Current Balance: "<<account.findBalance()<<std::endl;
	std::output<<"--------------------------"<<std::endl;
	std::output<<"Number of Deposits: "<<account.determineDeposits()<<std::endl;

	//interator that allows the program to print the appropriate number of deposits that have been made
	int index = 1;
	for(auto& accountDeposit: account.determineDeposits()){
		std::output<<"("<<index<<") " <<std::endl;
		index++;
		std::output<<accountDeposit<<std::endl;
	}
	std::output<<"--------------------------"<<std::endl;
	std::output<<"Number of Withdrawals: "<<account.determineWithdrawals()<<std::endl;
	std::output<<"--------------------------"<<std::endl;

	//interator that allows the program to print the appropriate number of withdrawals that have been made
	int index = 1;
	for(auto& accountWithdrawal: account.determinWithdrawals()){
		std::output<<"("<<index<<") " <<std::endl;
		index++;
		std::output<<accountWithdrawal<<std::endl;
	}

	return output;

}

//uses the Money class to determine the initial balance 
Money Account::getInitialBalance(){

	return initialBalance;

}

//method used to calculate the balance of the account after changes have been made. Uses the Money class
Money Account::findBalance(){

	Money accountBalance = account.getInitialBalance();
	for (auto& accountWithdrawal: account.determineWithdrawals()){
		accountBalance = accountBalance - accountWithdrawal;
	}
	for (auto& accountDeposit: account.determineDeposits()){
		accountBalance = accountBalance + accountDeposit;
	}

	return accountBalance;
}

//void functions used for making changes to the account (deposits and withdrawals)
void Account::makeDeposit(Money accountDeposit){

	deposits.push_back(accountDeposit);
}

void Account::makeWithdrawals(Money accountWithdrawal){

	withdrawals.push_back(accountWithdrawal);

}
