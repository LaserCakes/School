// Example of iostream functions (cout and cin) in C++
//  KJC (08/13/16)
#include <iostream>

using namespace std;

int main(void)
{
  int i;
  char string[100];

  cout << "Input an integer number: ";
  cin >> i;

  cout << "Input a string: ";
  cin >> string;

  cout << "i = " << i << "\n";
  cout << "string = " << string << "\n";

  return(0);
}
