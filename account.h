#ifndef Account_H
#define Account_H

#include <iostream>
#include "Money.h"

class  Account: public Money{

private: 
	
    

public:
   
	Account();//constructor
	
	makeDeposit();
	makeWithdrawals();

	std::vector<Money>;
	

};



#endif //Account_H  
