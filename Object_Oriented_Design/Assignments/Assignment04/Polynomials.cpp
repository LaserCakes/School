// Steven Romeiro
// U16803837
// Homework 4
// COP 3331
// Polynomials.cpp

#include<iostream>
#include<stdlib.h>
#include<vector>
#include "Polynomials.h"

using namespace std;

Polynomials::Polynomials() //Might not be needed
{
  terms = 0;
}

Polynomials::Polynomials(int terms)
{
  this->terms = terms;
  cout << "\nYou created a polynomial of " << this->terms << " terms." << endl;
}

void Polynomials::Set()
{
  int input;
  cout << "\nStarting with the largest term, enter your coefficients in order.";
  cout << endl;

  for(int i = 0; i < terms; i++)
  {
    cout << "\nCoefficient for exponent " << terms - 1 - i << ": ";
    cin >> input;
    Polynomial.insert(Polynomial.begin(), input);
  }
}

void Polynomials::Get()
{}

void Polynomials::Print()
{
  for(int i = Polynomial.size() - 1; i > 0; i--)
  {
    cout << Polynomial.at(i) << "x^" << i << " + ";
  }
  cout << Polynomial.at(0) << endl;
}


//Polynomials Polynomials::operator+(){}

//Polynomials Polynomials::operator-(){}

//Polynomials Polynomials::operator*(){}

//Polynomials& Polynomials::operator=(Polynomials &){}

//Polynomials& Polynomials::operator+=(Polynomials &){}

//Polynomials& Polynomials::operator-=(Polynomials &){}

//Polynomials& Polynomials::operator*=(Polynomials &){}

Polynomials::~Polynomials()
{}
