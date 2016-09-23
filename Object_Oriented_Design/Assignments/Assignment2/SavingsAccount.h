// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include "Account.h"

class SavingsAccount : public Account
{
  private:
    double interest;

  public:
    SavingsAccount(int initialSavingsBalance, double interestRate)
    : Account(initialSavingsBalance){};
    double CalculateInterest();

};
