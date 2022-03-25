#ifndef Money_H
#define Money_H

#include <iostream>
                             

class  Money{


private: 
    int dollars, cents;
    

public:
    Money();
    Money m(int dol, int cen);
    Money m1(int cents);
};



int getCents()
{
    return cents;
}

void setCents(int cents){
cents = cents;
}
int getMoney()
//return amounts of money in cents
return dollars + cents/100;
#endif //Money_H  
