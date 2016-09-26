//=========================================================== stack.cpp ======
//=  Member functions for class stack
//============================================================================
//=  Make:      g++ -c stack.cpp
//=  Exec:      NA
//=---------------------------------------------------------------------------
//=  Notes:     1) See comments for each member function
//=---------------------------------------------------------------------------
//=  History:   KJC (09/26/16) - Originate
//============================================================================
//------- Include files ------------------------------------------------------
#include <iostream>     // For cerr
#include <stdlib.h>     // For exit()
#include "stack.h"      // For class stack declaration

using namespace std;

//============================================================================
//=  Constructor to allocate memory for s_array
//=   - Exits with error message if not enough memory
//============================================================================
stack::stack(int length)
{
  size = length;
  top = -1;
  s_array = new int [size];
  if (s_array == 0)
  {
    cerr << "*** ERROR *** (Not enough memory for stack) \n";
    exit(1);
  }
}

//============================================================================
//=  Returns pointer to top element in stack
//=   - Returns -1 (for stack empty) upto (size - 1)
//============================================================================
int stack::get_top(void)
{
  return(top);
}

//============================================================================
//=  Pushes x onto stack if room lest in stack
//=   - Exits with error message if stack is full
//============================================================================
void stack::push(int x)
{
  if(top < (size - 1))
    s_array[++top] = x;
  else
  {
    cerr << "*** ERROR *** (Top of stack reached on push) \n";
    exit(1);
  }
}

//============================================================================
//=  Pops and returns value from stack
//=   - Exits with error message if stack is empty
//============================================================================
int stack::pop(void)
{
  if(top > -1)
    return(s_array[top--]);
  else
  {
    cerr << "*** ERROR *** (Bottom of stack reached on pop) \n";
    exit(1);
  }
}

//============================================================================
//=  Destructor for stack, deallocates s_array from memory
//============================================================================
stack::~stack(void)
{
  delete s_array;
}
