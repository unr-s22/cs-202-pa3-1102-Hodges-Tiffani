#include <iostream>
#include "money.h"

Money::Money(){
    dollars = 0;
    cents = 0;
}

Money::Money(int dollars, int cents):dollars(dollars), cents(cents){
}

int Money::getCents(){

    return cents;
}

void Money::setCents(int cents){
	cents = cents;
}

int Money::getMoney(){

	//return amounts of money in cents
	//return dollars + cents/100;

	double total = 0;
	double sum;

    	//cents to dollars
    	if (cents >= 100){
        	cents -= 100;
       		dollars += 1;
       		total = total + dollars;
       		sum = (sum + dollars + (cents/100));
   	}
   	else{
        	total += (cents/100);
        	sum += (cents/100);
	}
}
