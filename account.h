#ifndef Account_H
#define Account_H

#include <iostream>
#include "Money.h"

class  Account: public Money{

private: 
	
    

public:
   
	Account::Account():Money(){}//constructor
	
	makeDeposit();
	makeWithdrawals();

	std::vector<Money> depositVector;
	std::vector<Money> withdrawalVector;

	//overload of << operator
	
	 
	

};



#endif //Account_H  
