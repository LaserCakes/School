all: Main

Main: Account.o SavingsAccount.o CheckingAccount.o Main.o
		g++ -Wall Account.o SavingsAccount.o CheckingAccount.o Main.o -o Main

#OLD_Main:Account.o SavingsAccount.o CheckingAccount.o OLD_Main.o
#		g++ -Wall Account.o SavingsAccount.o CheckingAccount.o OLD_Main.o -o OLD_Main

Main.o: Main.cpp
		g++ -Wall -c Main.cpp

#OLD_Main.o: OLD_Main.cpp
#		g++ -Wall -c OLD_Main.cpp

Account.o: Account.cpp Account.h
		g++ -Wall -c Account.cpp

SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h
		g++ -Wall -c SavingsAccount.cpp

CheckingAccount.o: CheckingAccount.cpp CheckingAccount.h
		g++ -Wall -c CheckingAccount.cpp

clean:
		rm -rf *o Program
