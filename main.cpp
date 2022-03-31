#include <iostream>
#include <vector>
#include "account.h"
#include "money.h"

int main(){


	double account = 300.23;

	std::cout << account << std::endl;

	//call to deposit method and input deposits

	account.deposits;

	double input1 = 200.00;
	double input2 = 300.24;	
	double input3 = 501.22;

	deposits.push_back(input1);
	deposits.push_back(input2);
	deposits.push_back(input3);

		
	//print account
	std::cout << account << std::endl;
	

	//call to the withdraw method and input numbers
	double input4 = 300.10;
	double input5 = 201.34;	

	account.withdrawals();

	withdrawals.push_back(input1);
	withdrawals.push_back(input2);
	withdrawals.push_back(input3);


	//verify relational operators function correctly
	Money m1(105,45);
	Money m2(23,80);

	//check that relational operators behave correctly 

	if(m1 > m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	if(m1 < m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	if(m1 <= m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	if(m1 >= m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	if(m1 != m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	if(m1 == m2){
     		std::cout<<"yesss"<<std::endl;
	} else 
		std::cout<<"nooooo"<<std::endl;

	//check +/- operators
	std::cout<<m1+m2<<std::endl;
	std::cout<<m1-m2<<std::endl;


	return 0;


}

	
	








