// Example of mulitple inheritance
//  KJC (08/14/16)
#include <iostream>

using namespace std;

class a1                        // Declaration of class a1
{
  public:
    void a1_func(void)
    {
      cout << "This is class a1... \n";
    }
};

class a2                        // Declaration of class a2
{
  public:
    void a2_func(void)
    {
      cout << "This is class a2... \n";
    }
};

class b0 : public a1, public a2 // Declaration of class b0
{
  public:
    void b0_func(void)
    {
      cout << "This is class b0... \n";
    }
};

int main(void)
{
  b0 test;              // Instance of class b0

  test.a1_func();       // Access public function of class a1
  test.a2_func();       // Access public function of class a2
  test.b0_func();       // Access public function of class b0

  return(0);
}
