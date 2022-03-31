#include <iostream>
#include <vector>
#include "account.h"
#include "money.h"

int main(){

	//starting balance
	double account = 300.23;


	//print account
	std::cout << account << std::endl;

	//call to deposit method and input deposits
	account.makeDeposit();

	double deposit1 = 200.00;
	double deposit2 = 300.24;	
	double deposit3 = 501.22;

	deposits.push_back(deposit1);
	deposits.push_back(deposit2);
	deposits.push_back(deposit3);

		
	//print account
	std::cout << account << std::endl;
	

	//call to the withdrawal method and input numbers
	account.makeWithdrawals();

	double withdrawal1 = 300.10;
	double withdrawal2 = 201.34;	


	withdrawals.push_back(withdrawal1);
	withdrawals.push_back(withdrawal2);


	//verify relational operators function correctly
	Money m1(105,45);
	Money m2(23,80);

	//check that relational operators behave correctly 

	if(m1 > m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}

	if(m1 < m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}

	if(m1 <= m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}

	if(m1 >= m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}


	if(m1 != m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}

	if(m1 == m2){
     		std::cout<<"yesss"<<std::endl;
	}else 
		std::cout<<"nooooo"<<std::endl;
	}


	//check +/- operators
	std::cout<<m1+m2<<std::endl;
	std::cout<<m1-m2<<std::endl;


	return 0;


}

	
	








