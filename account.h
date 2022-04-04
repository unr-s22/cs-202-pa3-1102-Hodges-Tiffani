#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>

#include "money.h"

class  Account: public Money{

private: 

	Money account;
	int size;

	//starting balance for account
	Money initialBalance;

	//vectors that store withdrawals and deposits
	std::vector<Money*> deposits;
	std::vector<Money*> withdrawals;
    
public:

	Money getInitialBalance(); //return the initial balance of the account
	Money findBalance(); //find balance after changes are made to the account
	
	void makeDeposit(Money accountDeposit); //function for making deposits to the account
	void makeWithdrawals(Money accountWithdrawal); //function for making withdrawals to the account

	//functions that return the deposits and withdrawals for the account
	//determine what deposits or withdrawals have been made-> meaning how many 
	void determineDeposits(int deposits){
		int index = 0;
   		for(index = 0; index < size; index++){
       			deposits++;
  		}
	}

	void determineWithdrawals(int withdrawals){
		int index = 0;
   		for(index = 0; index < size; index++){
       			withdrawals++;
  		}
	}
	
	//overload of << operator. Print details for the account
	friend std::ostream& operator<<(std::ostream& output, const Account &account); 
   
	
};

#endif //Account_H  
