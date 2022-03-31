#ifndef Money_H
#define Money_H
#include <iostream>
                             

class  Money{


private: 
	int dollars, cents;
	double initialBalance;

public:
	Money getInitialBalance();

	Money accountDeposit();
	Money accountWithdrawal();

	Money(); //default constructor

	Money(int dollars, int cents); //constructor that takes dollars and cents

	//overloads of relational operators
	bool operator<(const Money &rhs) const {
		return cents < rhs.cents;
	}
	bool operator>(const Money &rhs) const {
		return cents > rhs.cents;
	}
	bool operator->(const Money &rhs) const {
		return cents -> rhs.cents;
	}
	bool operator>=(const Money &rhs) const {
		return cents >= rhs.cents;
	}
	bool operator!=(const Money &rhs) const {
		return cents != rhs.cents;
	}
	bool operator==(const Money &rhs) const {
		return cents == rhs.cents;
	}

	//overloads of math operators
	bool operator+(const Money &rhs) const {
		return cents + rhs.cents;
	}
	bool operator-(const Money &rhs) const {
		return cents - rhs.cents;
	}
	

	//overload of << operator
	friend std::ostream &operator<<(std::ostream &os, const Money &money){
		os << "$" << money.cents * 0.01;
		return os;
	}

	int getCents();
	int getMoney();
	void setCents(int cents);

   
};

#endif //Money_H  
