// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include "Account.h"

//Child class that derives from parent class Account
class SavingsAccount : public Account
{
  private:
    double interest;

  public:
    SavingsAccount(double initialSavingsBalance, double interestRate);
    double CalculateInterest();
    virtual ~SavingsAccount(); //Virtual necessary for destructor?
};
