// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include "Account.h"

//Child class that derives from parent class Account
class CheckingAccount : public Account
{
  private:
    double fee;

  public:
    CheckingAccount(double initialBalance, double transactionFee);
    void Credit(double depositAmount);
    bool Debit(double withdrawAmount);
    double CalculateInterest();
    virtual ~CheckingAccount(); //Virtual necessary for destructor?
};
