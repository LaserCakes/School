// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

/*Has the compiler defined this header already? When it's included in the
/ derived classes, this header guard will keep the compiler from redefining
/ Account.h there. The compiler has originally defined it here, so when a
/ #include directive is called for Account.h, the header guard sees that the
/ compiler has already defined it here, and doesn't redefine it. */
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
    void Credit(double depositAmount);
    bool Debit(double withdrawAmount);
    ~Account();
};
#endif
