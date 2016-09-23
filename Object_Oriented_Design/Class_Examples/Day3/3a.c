// Example of a union structure
//  KJC (08/13/16)
#include <stdio.h>

union i_f_var
{
  int i_var;
  float f_var;
};

int main(void)
{
  union i_f_var x;

  // This works...
  x.i_var = 123;
  printf("x.i_var = %d \n", x.i_var);
  x.f_var = 0.123;
  printf("x.f_var = %f \n", x.f_var);

  // This does not work...
  x.i_var = 123;
  x.f_var = 0.123;
  printf("x.i_var = %d \n", x.i_var);
  printf("x.f_var = %f \n", x.f_var);

  return(0);
}
