pa3: account.o money.o main.cpp
	g++ -std=c++11 -o pa3 account.o money.o main.cpp

money.o: money.cpp money.h
	g++ -c -std=c++11 money.cpp

account.o: account.cpp account.h
	g++ -c -std=c++11 account.cpp

clean:
	rm *.o pa3 
