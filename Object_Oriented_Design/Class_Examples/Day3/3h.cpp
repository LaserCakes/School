// Example of scope access operator in C++
//  KJC (08/13/16)
#include <stdio.h>

int x = 123;

int main(void)
{
  int x = 321;

  printf("x   = %d \n", x);
  printf("::x = %d \n", ::x);

  return(0);
}
