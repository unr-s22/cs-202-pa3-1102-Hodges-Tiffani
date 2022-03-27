#ifndef Money_H
#define Money_H
#include <iostream>
                             

class  Money{


private: 
	int all_dollars, all_cents;

public:
	Money(); //default constructor

	Money(int all_dollars, int all_cents); //constructor that takes dollars and cents

	//overloads of relational operators
	bool operator<(const Money &rhs) const {
		return all_cents < rhs.cents;
	}
	bool operator>(const Money &rhs) const {
		return all_cents > rhs.all_cents;
	}
	bool operator⇐(const Money &rhs) const {
		return all_cents ⇐ rhs.all_cents;
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

	/*int getCents();
	void setCents(int cents);
	int getMoney();*/

   
};

#endif //Money_H  
