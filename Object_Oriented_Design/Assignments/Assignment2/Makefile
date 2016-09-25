all: Program

Program: Accounts.o Program.o
		g++ -Wall Accounts.o Program.o -o Program

Program.o: Program.cpp
		g++ -Wall -c Program.cpp

Accounts.o: Accounts.cpp Accounts.h
		g++ -Wall -c Accounts.cpp

clean:
		rm -rf *o Program
