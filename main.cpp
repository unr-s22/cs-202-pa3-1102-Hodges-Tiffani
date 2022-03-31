#include <iostream>
#include "account.h"
#include "money.h"

int main(){


	double account = 300.23;

	std::cout << account << std::endl;

	//call to deposit method and input deposits
	account.makeDeposit(200.00, 300.24, 501.22);

		
	//print account
	std::cout << account << std::endl;
	

	//call to the withdraw method and input numbers
	account.makeWithdrawals(300.10, 201.34);

	//verify relational operators function correctly
	Money m1(105,45);
	Money m2(23,80);
	if(m1 > m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"error"<<std::endl;

	if(m1 < m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"error"<<std::endl;








	return 0;


}

	
	








