#ifndef Money_H
#define Money_H

#include <iostream>
                             

class  Money{


private: 
<<<<<<< HEAD
    int dollars, cents;
    
=======
>>>>>>> 33a00e233c449d71739b19a5d3264556309df069

	int cents;
	
public:
<<<<<<< HEAD
    Money();
    Money m(int dol, int cen);
    Money m1(int cents);
=======

	Money(); //default constructor
	Money(int dollars, int cents); //constructor that takes dollars and cents

	//overloads of relational operators
	bool operator<(const Money &rhs) const {
		return all_cents < rhs.all_cents;
	}
	bool operator>(const Money &rhs) const {
		return all_cents > rhs.all_cents;
	}
	bool operator<-(const Money &rhs) const {
		return all_cents <- rhs.all_cents;
	}
	bool operator>=(const Money &rhs) const {
		return all_cents >= rhs.all_cents;
	}
	bool operator!=(const Money &rhs) const {
		return all_cents != rhs.all_cents;
	}
	bool operator==(const Money &rhs) const {
		return all_cents == rhs.all_cents;
	}

	//overloads of math operators
	bool operator+(const Money &rhs) const {
		return all_cents + rhs.all_cents;
	}
	bool operator-(const Money &rhs) const {
		return all_cents - rhs.all_cents;
	}
	

	//overload of <<
	friend std::ostream &operator<<(std::ostream &os, const Money &money){
		os << "$" << money.all_cents * 0.01;
		return os;
	}
   


>>>>>>> 33a00e233c449d71739b19a5d3264556309df069
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
