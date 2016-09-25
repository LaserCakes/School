// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

#include "Account.h"

class CheckingAccount : public Account
{
  private:
    double fee;

  public:
    CheckingAccount(double initialBalance, double transactionFee);
    void Credit(double depositAmount);
    void foobar(); //To be modified later
};
