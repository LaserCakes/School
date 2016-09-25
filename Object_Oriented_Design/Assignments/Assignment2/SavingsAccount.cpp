// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(double initialSavingsBalance, double interestRate)
: Account(initialSavingsBalance)
{
  if(interestRate > 0)
  {
    interest = interestRate/100;
  }
  else
  {
    interest = 0;
    cout << "The interest rate value you entered is invalid" << endl;
  }
}

double SavingsAccount::CalculateInterest()
{
  return (interest * GetBalance());
}

SavingsAccount::~SavingsAccount()
{
}
