// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "CheckingAccount.h"

using namespace std;

//Constructor for child class that calls parent class constructor.
CheckingAccount::CheckingAccount(double initialBalance, double transactionFee) :
Account(initialBalance)
{
  //Validates if fee entered is non-negative.
  if (transactionFee >= 0)
  {
    fee = transactionFee;
  }
  else
  {
    //Invalid entry sets fee to zero and outputs an error.
    fee = 0;
    cout << "Invalid fee amount entered. No fee being charged." << endl;
  }
}

//Re-defines parent class to charge a fee when the transaction is made.
void CheckingAccount::Credit(double depositAmount)
{
  //Informs the user what memeber function is being called
  cout << "This is a call to the Derived class Checking Account Credit function." << endl;

  if (depositAmount - fee >= 0)
  {
    double newAmount = depositAmount - fee;
    Account::Credit(newAmount);
    cout << "A fee of $" << fee << " has been charged for this service." << endl;
    cout << "$" << depositAmount - fee << " has been deposited." << endl;
  }
  else
  {
    cout << "The amount you want to deposit is not is not enough to cover the";
    cout << " Transactin Fee." << endl;
    cout << "Fee being waived for this transaction. " << endl;
    cout << "Depositing $" << depositAmount << endl;
    Account::Credit(depositAmount);
  }
}

//Re-defines parent class to charge a fee when transaction is made.
bool CheckingAccount::Debit(double withdrawAmount)
{
  //Informs the user what memeber function is being called
  cout << "This is a call to the Derived class Checking Account Debit function." << endl;

  //Transaction will process if debit amount + fee does not overdraw account.
  if (Account::Debit(withdrawAmount + fee))
  {
    cout << "A fee of $" << fee << " has been charged for this service." << endl;
    cout << "Deducting $" << withdrawAmount + fee << " from your account." << endl;
    return true;
  }
  return false;
}

CheckingAccount::~CheckingAccount()
{}
