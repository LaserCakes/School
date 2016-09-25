// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "Accounts.h"

using namespace std;

int main()
{
  /*
  double checkingDeposit, savingsDeposit;
  cout << "How much would you like to deposit into your Checking Account?" << endl;
  cout << "$";
  cin >> checkingDeposit;
  cout << "A fee of $100 will incur upon any services rendered to this account" << endl;
  cout << endl << "How much would you like to deposit into your Savings Account?" << endl;
  cin >> savingsDeposit;
  cout << endl;

  CheckingAccount myChecking(checkingDeposit, 100);
  SavingsAccount mySavings(savingsDeposit, 7);

  cout << "Your Checking balance is $" << myChecking.GetBalance() << endl;
  cout << "Your Savings balance is $" << mySavings.GetBalance() << endl;
  cout << "An interest of 7% is being earned on this account" << endl;
  double interest = mySavings.CalculateInterest();
  cout << "Account interest earned is $" << interest << endl;

  cout << "Crediting Checking account with $" << interest << endl;
  myChecking.Credit(interest);
  cout << "Checking balance is now $" << myChecking.GetBalance() << endl;
  cout << "Withdrawing $150 from the account" << endl;
  myChecking.Debit(150);
  cout << "Current Checking account balance is now $" << myChecking.GetBalance() << endl;



  */

  CheckingAccount myChecking(1000, 100);
  cout << "Checking balance is $" << myChecking.GetBalance() << endl;
  cout << "A fee of $100 will incur upon any services rendered to this account" << endl;
  SavingsAccount mySavings(2000, 7.0);
  cout << "Savings balance is $" << mySavings.GetBalance() << endl;
  cout << "An interest of 7% is being earned on this account" << endl;
  double interest = mySavings.CalculateInterest() ;
  cout << "Account interest earned is $" << interest << endl;

  cout << "Crediting Checking account with $" << interest << endl;
  myChecking.Credit(interest);
  cout << "Checking balance is now $" << myChecking.GetBalance() << endl;
  cout << "Withdrawing $150 from the account" << endl;
  myChecking.Debit(150);
  cout << "Current Checking account balance is now $" << myChecking.GetBalance() << endl;


  return 0;
}
