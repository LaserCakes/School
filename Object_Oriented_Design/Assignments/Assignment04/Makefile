all: Main

Main: Polynomials.o Main.o
	g++ -Wall Polynomials.o Main.o -o Main

Main.o: Main.cpp
	g++ -Wall -c Main.cpp

Polynomials.o: Polynomials.cpp Polynomials.h
	g++ -Wall -c Polynomials.cpp

clean:
	rm -rf *o Main
