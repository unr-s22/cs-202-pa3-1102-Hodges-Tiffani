#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "Money.h"

class  Account: public Money{

private: 
	double balance;
    
public:


   	Account(): Money(balance){}//constructor

   	double getBalance();
  	double withdraw(double);
   
	void printDetails();
	
	double makeDeposit();
	double makeWithdrawals();

	std::vector<Money> deposits;
	std::vector<Money> withdrawals;

	//overload of << operator

	friend std::ostream &operator<<(std::ostream &os, const Account &account){
		os << "$" << money.all_cents * 0.01;
		return os;
	}
   

	//Account (double balance);
	
};



#endif //Account_H  
