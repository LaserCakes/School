// Example of virtual function
//  KJC (08/14/16)
#include <iostream>

using namespace std;

class Base                      // Declaration of class Base
{
  public:
    int i;
    virtual void print_i()
    {
      cout << "Base i = " << i << "\n";
    }
};

class Derive : public Base      // Declaration of class Derive
{
  public:
    void print_i()
    {
      cout << "Derive i = " << i << "\n";
    }
};

int main(void)
{
  Base b;
  Derive d;
  Base *b_ptr;

  b.i = 1;              // Initialize some values
  d.i = 2;

  b_ptr = &b;           // Point to base class instance
  b_ptr->print_i();

  b_ptr = &d;           // Point to derive class instance
  b_ptr->print_i();

  return(0);
}
