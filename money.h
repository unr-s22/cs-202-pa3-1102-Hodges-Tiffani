#ifndef Money_H
#define Money_H
#include <iostream>
                             

class  Money{


private: 
	int dollars, cents;

public:
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
	

	//overload of << operator
	friend std::ostream &operator<<(std::ostream &os, const Money &money){
		os << "$" << money.all_cents * 0.01;
		return os;
	}

	int getCents();
	void setCents(int cents);
	int getMoney();


	//constructors
	//Money m(int dol, int cen);
   	//Money m1(int cents);
   
};

#endif //Money_H  
