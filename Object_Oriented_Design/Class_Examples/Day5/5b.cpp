// Example of C++ constructor in derived class
//  KJC (08/14/16)
#include <iostream>

using namespace std;

class aaa
{
  private:
    int p;

  public:
    aaa(int x)
    {
      p = x;
    }
    int get(void)
    {
      return(p);
    }
};

class bbb : public aaa
{
  public:
    bbb() : aaa(-1) {}
    bbb(int x) : aaa(x) {}
    void print(void) {cout << get() << "\n";}
};

int main(void)
{
  aaa x(123);
  bbb y(456), z;

  cout << x.get() << "\n";
  y.print();
  z.print();

  return(0);
}
