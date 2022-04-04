#ifndef Money_H
#define Money_H

#include <iostream>
#include <vector>
                             

class  Money{


private: 

	int dollars, cents;

public:

	double initialBalance;
	Money getInitialBalance();
	Money accountDeposit();
	Money accountWithdrawal();

	void determineDeposits(int deposits);
	void determineWithdrawals(int withdrawals);

	Money(); //default constructor

	Money(int dollars, int cents); //constructor that takes dollars and cents

	//overloads of relational operators
	bool operator<(const Money &rhs) const {
		return cents < rhs.cents;
	}
	bool operator>(const Money &rhs) const {
		return cents > rhs.cents;
	}
	bool operator<=(const Money &rhs) const {
		return cents <+ rhs.cents;
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
	bool operator+(const Money &rhs) {
		return cents + rhs.cents;
	}
	bool operator-(const Money &rhs) {
		return cents - rhs.cents;
	}
	
	//overload of << operator
	friend std::ostream &operator<<(std::ostream& output, const Money &money){
		output << "$" << money.cents * 0.01;
		return output;
	}

	int getCents();
	int getMoney();
	void setCents(int cents);

};

#endif //Money_H  
