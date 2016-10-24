// Steven Romeiro
// U16803837
// Homework 4
// COP 3331
// Main.cpp

#include<iostream>
#include<stdlib.h>
#include<vector>
#include"Polynomials.h"

using namespace std;

int main()
{
  int terms;

  cout << "This program will create polynomials." << endl;
  cout << "Enter how many terms will be in the first polynomial: ";
  cin >> terms;
  while(terms <= 0 || terms > 10)
  {
    cout << "Invalid number of terms. ";
    cout << "Please enter a value greater than 0 but no more than 10";
    cout << endl;
    cout << "Enter how many terms will be in the first polynomial: ";
    cin >> terms;
  }

  Polynomials FirstPolynomial(terms);
  FirstPolynomial.Set();
  FirstPolynomial.Print();

  cout << "\nSuccessful program termination" << endl;
  return 0;
}
