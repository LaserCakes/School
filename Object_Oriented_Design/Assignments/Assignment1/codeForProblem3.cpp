// A C++ program for assignment #1, problem #3
//  KJC (08/26/16)
#include <iostream>

using namespace std;

#define MAX_LEN 256

class myWeirdArray            // Declaration of class myWeirdArray
{
  protected:
    int array[MAX_LEN];       // Array of int
    int len;                  // Length of array
    int sum;                  // Sum of array values

  public:
    void myInit(int size);    // Initializes array
    void sumup(int upto);     // Sums array
    void set(int n, int x);   // Sets value array position n to x
    int  get(int n);          // Gets value of array position n
    int  getsum(void);        // Gets sum
    int  getlen(void);        // Gets len
};

void myWeirdArray::myInit(int size)
{
  for (int i=0; i<size; i++)
    array[i] = i;
}

void myWeirdArray::sumup(int upto)
{
  sum = 0;
  for (int i=0; i<upto; i++)
    sum = sum + array[i];
}

void myWeirdArray::set(int n, int x)
{
  array[n] = x;
}

int myWeirdArray::get(int n)
{
  return(array[n]);
}

int myWeirdArray::getsum(void)
{
  return(sum);
}

int myWeirdArray::getlen(void)
{
  return(len);
}

int main(void)
{
  myWeirdArray test;           // Instance of class myWeirdString
  int          mySize;         // Size of my array

  mySize = 10;
  test.myInit(mySize);
  test.sumup(mySize);

  cout << "The value of array position 3 is: " << test.get(3) << "\n";
  test.sumup(mySize);
  cout << "Sum = " << test.getsum() << "\n";
  test.sumup(3);
  cout << "Sum = " << test.getsum() << "\n";

  test.set(3, 6);
  test.sumup(mySize);
  cout << "The value of array position 3 is: " << test.get(3) << "\n";
  cout << "Sum = " << test.getsum() << "\n";
  test.sumup(3);
  cout << "Sum = " << test.getsum() << "\n";

  return(0);
}
