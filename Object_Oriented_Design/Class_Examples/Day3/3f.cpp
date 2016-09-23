// Example of inline function in C++
//  KJC (08/13/16)
#include <stdio.h>

inline int cube(int a)
{
  return(a * a * a);
}

int main(void)
{
  int i = 10;

  printf("cube(i++) = %d \n", cube(i++));

  return(0);
}
