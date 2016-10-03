// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include <iostream>
#include <stdlib.h>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
  double checkingDeposit, savingsDeposit, /*mainAccountDeposit,*/ checkingFee;
  double withdrawAmount, depositAmount, interest, interestEarned;

  //Initialized variables for easy access
  //mainAccountDeposit = 500;
  checkingDeposit = 1000;
  savingsDeposit = 2000;
  checkingFee = 100;
  interest = 7;
  withdrawAmount = 200;
  depositAmount = 300;

  //Creates parent class Object
  /*Account myMainAccount(mainAccountDeposit);

  //Tests calling of parent member function
  cout << "Main account balance is $" << myMainAccount.GetBalance() << endl;

  cout << "A debit of $" << withdrawAmount << " has been requested" << endl;
  //Tests parent class Debit function
  myMainAccount.Debit(withdrawAmount);
  cout << "Main Account balance is now $" << myMainAccount.GetBalance() << endl;
  cout << "A credit of $" << depositAmount << " has been requested" << endl;
  //Tests parent class Credit function
  myMainAccount.Credit(depositAmount);
  cout << "Main Account balance is now $" << myMainAccount.GetBalance() << endl;
  cout << endl;
  */

  //Creates child class Object
  CheckingAccount myChecking(checkingDeposit, checkingFee);

  //Test calling//Test of parent member funciton from child object
  cout << "Checking balance is $" << myChecking.GetBalance() << endl;
  cout << "A fee of $" << checkingFee << " will incur upon any services rendered to this account" << endl;
  cout << "A debit of $" << withdrawAmount << " has been requested" << endl;

  //Tests redefined Debit function in child class by withdrawing an amount
  myChecking.Debit(withdrawAmount);
  cout << "Current Checking account balance is now $" << myChecking.GetBalance() << endl;
  cout << "A credit of $" << depositAmount << " has been requested" << endl;
  //Tests redefined Credit function in child class by depositing an amount
  myChecking.Credit(depositAmount);
  cout << "Current Checking account balance is now $" << myChecking.GetBalance() << endl;
  cout << endl;

  //Creates child class Object
  SavingsAccount mySavings(savingsDeposit, interest);

  //Test calling of parent member funciton from child object
  cout << "Savings balance is $" << mySavings.GetBalance() << endl;
  if (interest < 0) {interest = 0;} //For consistency in the output in negative cases
  cout << "An interest of " << interest << "% is being earned on this account" << endl;

  //Tests calling of CalculateInterest function in child class
  interestEarned = mySavings.CalculateInterest();

  //Displays amount stored into interest variable
  cout << "Account interest earned is $" << interestEarned << endl;
  cout << "Crediting Savings account with $" << interestEarned << endl;

  //Tests Credit function in child class by depositing interest amount
  mySavings.Credit(interestEarned);
  cout << "Savings balance is now $" << mySavings.GetBalance() << endl;
  cout << "A debit of $" << withdrawAmount << " has been requested" << endl;
  //Tests Debit function in child class by withdrawing an amount
  mySavings.Debit(withdrawAmount);
  cout << "Savings balance is now $" << mySavings.GetBalance() << endl;

  return 0;
}
