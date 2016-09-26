// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "Accounts.h"

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
{}

//==============================SAVINGS ACCOUNT===============================//

SavingsAccount::SavingsAccount(double initialSavingsBalance, double interestRate)
: Account(initialSavingsBalance)
{
  if(interestRate > 0)
  {
    interest = interestRate/100.0;
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
{}

//=============================CHECKING ACCOUNT===============================//

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
  Account::Credit(newAmount);
  cout << "A fee of $" << fee << " is being charged for this service." << endl;
  cout << "$" << depositAmount - fee << " has been deposited." << endl;
}

void CheckingAccount::Debit(double withdrawAmount) //To be defined later
{
  if (Account::Debit(withdrawAmount + fee))
  {
    cout << "A fee of $" << fee << " is being charged for this service." << endl;
    cout << "$" << withdrawAmount + fee << " has been withdrawn." << endl;
  }
  else
  {
    cout << "Overdrawn!" << " Transaction cancelled." << endl;
  }
}

CheckingAccount::~CheckingAccount()
{}
