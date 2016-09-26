all: Program

Program: Account.o SavingsAccount.o CheckingAccount.o Program.o
		g++ -Wall Account.o SavingsAccount.o CheckingAccount.o Program.o -o Program

Program.o: Program.cpp
		g++ -Wall -c Program.cpp

Account.o: Account.cpp Account.h
		g++ -Wall -c Account.cpp

SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h
		g++ -Wall -c SavingsAccount.cpp

CheckingAccount.o: CheckingAccount.cpp CheckingAccount.h
		g++ -Wall -c CheckingAccount.cpp

clean:
		rm -rf *o Program
