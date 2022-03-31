#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>

#include "money.h"

class  Account: public Money{

private: 

	Money account;

	//starting balance for account
	Money initialBalance;

	//vectors that store withdrawals and deposits
	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
    
public:

	Money getInitialBalance(); //return the initial balance of the account
	Money findBalance(); //find balance after changes are made to the account
	
	void makeDeposit(Money accountDeposit); //function for making deposits to the account
	void makeWithdrawals(Money accountWithdrawal); //function for making withdrawals to the account

	//vector functions that return the deposits and withdrawals for the account
	//determine what deposits or withdrawals have been made/how many 
	std::vector<Money> determineDeposits(){
		return deposits;
	}
	std::vector<Money> determineWithdrawals(){
		return withdrawals;
	}
	
	//overload of << operator. Print details for the account
	friend std::ostream& operator<<(std::ostream& output, const Account &account); 
   
	
};

#endif //Account_H  
