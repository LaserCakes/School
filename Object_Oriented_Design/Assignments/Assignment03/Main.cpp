// Steven Romeiro
// U16803837
// Homework 3
// COP 3331
// Program2.cpp

#include<iostream>
#include<stdio.h>
#include<vector>
#include"CheckingAccount.h"
#include"SavingsAccount.h"

using namespace std;

int main()
{
  double initialDeposit1, initialDeposit2, initialDeposit3, initialDeposit4;
  double withdrawAmount, depositAmount, interestEarned;
  double fee = 75, rate = 10;

  //Prompt user for initial deposit values for creating account objects
  cout << "Please create 4 accounts by making an initial deposit into each one.";
  cout << "\nHow much would you like to deposit in Checking account 1?" << endl;
  cout << "$";
  cin >> initialDeposit1;
  cout << "\nHow much would you like to deposit in Checking account 2?" << endl;
  cout << "$";
  cin >> initialDeposit2;
  cout << "\nHow much would you like to deposit in Savings account 1?" << endl;
  cout << "$";
  cin >> initialDeposit3;
  cout << "\nHow much would you like to deposit in Savings account 2?" << endl;
  cout << "$";
  cin >> initialDeposit4;
  cout << "\nCreating your accounts with specified amounts." << endl;

  //Create account objects with amounts specified
  CheckingAccount myChecking1(initialDeposit1, fee), myChecking2(initialDeposit2, fee);
  SavingsAccount mySavings1(initialDeposit3, rate), mySavings2(initialDeposit4, rate);

  //Create vectors of Base Class pointer type and point them to each derived object
  vector < Account * > accountVectors(4);
  accountVectors[0] = &myChecking1;
  accountVectors[1] = &myChecking2;
  accountVectors[2] = &mySavings1;
  accountVectors[3] = &mySavings2;

  cout << "Two Checking accounts and two Saving accounts have been created";
  cout << endl;

  //Menu selection display
  cout << "\t[1] Checking 1\n\t[2] Checking 2\n\t[3] Savings 1\n\t[4] Savings 2\n";

  int i = 0; //Iterator

  while(i >= 0)
  {
    cout << "\nPlease select an account (0 to exit): " << endl;
    cin >> i;

    switch(i)
    {
      case 1:
      case 2:
      case 3:
      case 4:
      {
        cout << "\nHow much would you like to deposit?" << endl;
        cout << "$";
        cin >> depositAmount;

        //Verify depositAmount entered is a valid amount
        if (depositAmount < 0)
          {
            cout << "Invalid amount entered." << endl;
            continue;
          }

        /* Create a SavingsAccount pointer and assign to it the current vector
        *  that has been dynamically cast to a SavingsAccount pointer as well.
        *  The cast will be succesfull if the current accountVector is currently
        *  pointing to an object of SavingsAccount. If not, then SavingsAccount
        *  pointer will be assigned a null pointer.
        */
        SavingsAccount *savingsPtr = dynamic_cast <SavingsAccount *>(accountVectors[--i]);
        if(savingsPtr != NULL)
        {
          //Calculates the interest earned on the Account and adds to depositAmount
          interestEarned = savingsPtr->CalculateInterest();
          depositAmount += interestEarned;
          cout << "Your Savings Account has earned you an interest amount of $";
          cout << interestEarned << endl;
        }

        accountVectors[i]->Credit(depositAmount);
        cout << "\nHow much would you like to withdraw?" << endl;
        cout << "$";
        cin >> withdrawAmount;

        //Verify that the withdrawAmount entered is greater than zero
        while(withdrawAmount <= 0)
        {
          cout << "Invalid amount entered." << endl;
          cout << "\nHow much would you like to withdraw?" << endl;
          cout << "$";
          cin >> withdrawAmount;
        }

        accountVectors[i]->Debit(withdrawAmount);
        cout << "The balance of this account is $" << accountVectors[i]->GetBalance();
        cout << endl;
      }
        break;

      //Default case if no account is selected
      default:
        {
          //Sets the iterator to negative value to exit the while loop.
          i = -1;
          cout << "No valid account selected." << endl;
        }
        break;
    }
  }

  cout << "\nEnd of program" << endl;
  return 0;
}
