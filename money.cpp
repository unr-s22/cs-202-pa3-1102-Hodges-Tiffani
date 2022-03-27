#include <iostream>
#include "money.h"
#include <iostream>

using namespace std;

Money::Money(){
    dollars = 0;
    cents = 0;
}

Money::Money(int dollars, int cents):dollars(dollars), cents(cents){
}

/*int Money::getCents(){
    return cents;
}

void Money::setCents(int cents){
	cents = cents;
}

int Money::getMoney(){
	//return amounts of money in cents
	return dollars + cents/100;
}*/



