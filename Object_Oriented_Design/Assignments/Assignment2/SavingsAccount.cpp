// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(int initialSavingsBalance, double interestRate)
{
  if(interestRate > 0)
  {
    interest = interestRate;
  }
  else
  {
    interest = 0;
    cout << "The interest rate value you entered is invalid" << endl;
  }
}

double CalculateInterest()
{
  return(GetBalance() * interest);
}
