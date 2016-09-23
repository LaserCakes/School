// Example of reference variables in C++
#include <stdio.h>

int main(void)
{
  int i;
  int &ir = i;

  i = 10;
  ir++;

  printf("i  = %d   ir = %d \n", i, ir);
  printf("&i = %p  &ir = %p \n", &i, &ir);

  return(0);
}
