// Steven Romeiro
// U16803837
// Homework 2
// COP 3331
// Account.cpp

#include<iostream>
#include<stdlib.h>
#include"Account.h"

using namespace std;

//Sets balance to whatever was input if it's a valid amount.
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

//Adds deposit amount to the initial balance.
void Account::Credit(double depositAmount)
{
  if(depositAmount >= 0)
  {
    balance += depositAmount;
  }
  else
  {
    cout << "Invalid amount entered. Deposit cancelled." << endl;
  }
}

//Subtracts amount entered from the balance as long as result is non-negative.
bool Account::Debit(double withdrawAmount)
{
  if(withdrawAmount <= balance)
  {
    balance -= withdrawAmount;
    return true;
  }
  else
  {
    //Outputs error message if account is overdrawn.
    cout << "Debit amount exceeds your current balance." << endl;
    cout << "Overdrawn!" << " Transaction cancelled." << endl;
    return false;
  }

}

//Returns value of private member variable balance.
double Account::GetBalance()
{
  return balance;
}

Account::~Account()
{
}
