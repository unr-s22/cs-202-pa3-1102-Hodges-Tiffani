#ifndef Account_H
#define Account_H

#include <iostream>
#include "Money.h"

class  Account: public Money{

private: 
	double balance;
    

public:
   Account();
   Account (double balance);
   double getBalance();
   double withdraw(double);
   void printDetails();

};



#endif //Account_H  
