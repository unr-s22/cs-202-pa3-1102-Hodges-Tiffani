#ifndef Account_H
#define Account_H

#include <iostream>
#include "Money.h"

class  Account: public Money{

private: 
	double balance;
    

public:
<<<<<<< HEAD
   Account();
   Account (double balance);
   double getBalance();
   double withdraw(double);
   void printDetails();
=======
   
	Account::Account():Money(){}//constructor
	
	makeDeposit();
	makeWithdrawals();

	std::vector<Money> depositVector;
	std::vector<Money> withdrawalVector;

	//overload of << operator
	
	 
	
>>>>>>> 33a00e233c449d71739b19a5d3264556309df069

};



#endif //Account_H  
