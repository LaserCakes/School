// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include<iostream>
#include<stdlib.h>
#include"Account.h"

using namespace std;

Account::Account(double initialBalance)
{
  if(initialBalance >= 0)
  {
    balance = initialBalance;
  }
  else
  {
    balance = 0;
    cout << "Invalid amount entered. Balance set to $0.0" << endl;
  }
}

void Account::Credit(double depositAmount)
{
  balance += depositAmount;
}

bool Account::Debit(double withdrawAmount)
{
  if(withdrawAmount <= balance)
  {
    balance -= withdrawAmount;
    return true;
  }
  else
  {
    cout << "Debit amount exceeds your current balance." << endl;
    return false;
  }

}

double Account::GetBalance()
{
  return balance;
}

Account::~Account()
{
}
