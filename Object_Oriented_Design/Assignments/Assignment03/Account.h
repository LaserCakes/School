// Steven Romeiro
// U16803837
// Homework 2
// COP 3331
// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

//Parent class Account
class Account
{
  private:
    double balance;

  public:
    Account(double initialBalance);
    double GetBalance();
    virtual void Credit(double depositAmount);
    virtual bool Debit(double withdrawAmount);
    virtual double CalculateInterest();
    virtual ~Account();
};
#endif
