// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double transactionFee) :
Account(initialBalance)
{
  if (transactionFee >= 0)
  {
    fee = transactionFee;
  }
  else
  {
    fee = 0;
    cout << "Invalid fee amount entered. No fee being charged." << endl;
  }
}

void CheckingAccount::Credit(double depositAmount)
{
  double newAmount = depositAmount - fee;
  Credit(newAmount);
}

void CheckingAccount::foobar() //To be defined later
{}
