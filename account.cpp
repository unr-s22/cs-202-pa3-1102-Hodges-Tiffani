#include <iostream>
#include "account.h"

Account::Account():Money(){
}

Account::makeDeposit(){

	Money m;
	auto sum_deposits =
	  std::accumulate(deposits.begin(), deposits.end(),m);

}


Account::makeWithdrawals(){



}
