// Steven Romeiro
// U16803837
// Homework 2
// COP 3331

class Account
{
  private:
    double balance;

  protected:
    Account(double initialBalance);
    void Credit(double depositAmount);
    bool Debit(double withdrawAmount);
    double GetBalance();
    ~Account();


};
