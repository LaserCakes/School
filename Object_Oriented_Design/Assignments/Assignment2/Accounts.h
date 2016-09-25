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
    ~Account();

  public:
    double GetBalance();

};

//==============================SAVINGS ACCOUNT===============================//

class SavingsAccount : public Account
{
  private:
    double interest;

  public:
    SavingsAccount(double initialSavingsBalance, double interestRate);
    double CalculateInterest();
    ~SavingsAccount();
};

//=============================CHECKING ACCOUNT===============================//

class CheckingAccount : public Account
{
  private:
    double fee;

  public:
    CheckingAccount(double initialBalance, double transactionFee);
    void Credit(double depositAmount);
    void Debit(double depositAmount); //To be modified later
    ~CheckingAccount();
};
