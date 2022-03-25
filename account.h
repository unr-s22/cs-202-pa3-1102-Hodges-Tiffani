#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "Money.h"

class  Account: public Money{

private: 
	
    

public:
   
	Account::Account():Money(){}//constructor
	
	makeDeposit();
	makeWithdrawals();

	std::vector<Money> deposits;
	std::vector<Money> withdrawals;

	//overload of << operator
	
	 
	

};



#endif //Account_H  
