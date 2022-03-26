#include <iostream>
#include "account.h"
#include "money.h"

using namespace std;

int main(){
    int cents;
    float dollars;

    cents = 99;

    addMoney(dollars, cents);
return 0;
}

void addMoney(float dollars, int cents)
{
    float total = 0;

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

	double account = 300.23;

	std::cout << account << std::endl;
	








