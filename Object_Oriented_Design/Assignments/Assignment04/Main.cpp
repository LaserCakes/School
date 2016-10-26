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
  int terms = 0;

  cout << "This program will create polynomials." << endl;

  //Creates the first polynomial to be set by the user
  Polynomials FirstPolynomial(terms);
  FirstPolynomial.Set();

  //Creates the second polynomial to be set by the user
  Polynomials SecondPolynomial(terms);
  SecondPolynomial.Set();

  //Empty polynomial for assignment purposes
  Polynomials ThirdPolynomial;

  cout << "You made the following polynomials:" << endl;
  FirstPolynomial.Print();
  SecondPolynomial.Print();
  //Arbitrary call of Get() function to test functionality
  FirstPolynomial.Get();

  //Perform the addition operation and display results
  cout << "\nThirdPolynomial = SecondPolynomial + FirstPolynomial: " << endl;
  ThirdPolynomial = SecondPolynomial + FirstPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();
  cout << "Third Polynomial is: ";
  ThirdPolynomial.Print();

  //Perform the subtraction operation and display results
  cout << "\nThirdPolynomial = SecondPolynomial - FirstPolynomial: " << endl;
  ThirdPolynomial = SecondPolynomial - FirstPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();
  cout << "Third Polynomial is: ";
  ThirdPolynomial.Print();

  //Perform the shorthand addition operation and display results
  cout << "\nFirstPolynomial += SecondPolynomial: " << endl;
  FirstPolynomial += SecondPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();

  //Perform the shorthand subtraction operation and display results
  cout << "\nFirstPolynomial -= SecondPolynomial: " << endl;
  FirstPolynomial -= SecondPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();

  //Perform the multiplication operation and display results
  cout << "\nThirdPolynomial = SecondPolynomial * FirstPolynomial: " << endl;
  ThirdPolynomial = SecondPolynomial * FirstPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();
  cout << "Third Polynomial is: ";
  ThirdPolynomial.Print();

  //Perform the shorthand multiplication operation and display results
  cout << "\nFirstPolynomial *= SecondPolynomial: " << endl;
  FirstPolynomial *= SecondPolynomial;
  cout << "First Polynomial is: ";
  FirstPolynomial.Print();
  cout << "Second Polynomial is: ";
  SecondPolynomial.Print();


  cout << "\nSuccessful program termination" << endl;
  return 0;
}
