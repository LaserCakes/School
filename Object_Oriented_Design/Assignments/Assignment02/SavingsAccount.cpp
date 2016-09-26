// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "SavingsAccount.h"

using namespace std;

//Constructor for child class that calls parent class constructor.
SavingsAccount::SavingsAccount(double initialSavingsBalance, double interestRate)
: Account(initialSavingsBalance)
{
  //Initializes interest as long as value entered is valid.
  if(interestRate > 0)
  {
    interest = interestRate/100;
  }
  else
  {
    //Invalid interest entered, set to zero and give error.
    interest = 0;
    cout << "The interest rate value you entered is invalid" << endl;
  }
}

//Calculates interest by multiplying interest by original balance.
double SavingsAccount::CalculateInterest()
{
  return (interest * GetBalance());
}

SavingsAccount::~SavingsAccount()
{}
