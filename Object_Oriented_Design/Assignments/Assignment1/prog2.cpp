//=========================================================== prog2.cpp ======
//=  Program to demonstrate C++ class stack1
//============================================================================
//=  Make:      g++ prog2.cpp stack1.cpp stack.cpp
//=  Exec:      prog2
//=---------------------------------------------------------------------------
//=  Entry:     No entry variables
//=  Exit:      No exit variables
//=---------------------------------------------------------------------------
//=  Notes:     1) This program pushes and pops some values onto a stack
//=                as defined from class stack1
//=             2) This program also uses the swap function
//=---------------------------------------------------------------------------
//=  History:   KJC (09/27/16) - Originate
//============================================================================
//------- Include files ------------------------------------------------------
#include <iostream>     // For cout
#include "stack1.h"     // For class stack1

using namespace std;

//------- Main program ------------------------------------------------------
int main(void)
{
  stack1 x(100);        // Declare a stack1 x of length 100
  int i;                // Loop counter

  // Push some values onto stack1 x
  for (i=100; i<125; i++)
    x.push(i);

  // Swap the top two values on the stack
  x.swap();

  // Pop stack x, output stack1 top pointer and popped values
  for (i=0; i<5; i++)
  {
    cout << "Top of x = " << x.get_top() << "   ";
    cout << "Pop x = " << x.pop() << "\n";
  }

  return(0);
}
