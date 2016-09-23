//=========================================================== prog1.cpp ======
//=  Program to demonstrate C++ class stack
//============================================================================
//=  Make:      g++ prog1.cpp stack.cpp
//=  Exec:      prog1
//=---------------------------------------------------------------------------
//=  Entry:     No entry variables
//=  Exit:      No exit variables
//=---------------------------------------------------------------------------
//=  Notes:     1) This program pushes and pops some values onto a stack
//=                as defined from class stack
//=---------------------------------------------------------------------------
//=  History:   KJC (09/27/16) - Originate
//============================================================================
//------- Include files ------------------------------------------------------
#include <iostream>     // For cout
#include "stack.h"      // For class stack

using namespace std;

//------- Main program ------------------------------------------------------
int main(void)
{
  stack x(100);         // Declare a stack x of length 100
  int i;                // Loop counter

  // Push some values onto stack x
  for (i=100; i<125; i++)
    x.push(i);

  // Pop stack x, output stack top pointer and popped values
  for (i=0; i<5; i++)
  {
    cout << "Top of x = " << x.get_top() << "   ";
    cout << "Pop x = " << x.pop() << "\n";
  }

  return(0);
}
