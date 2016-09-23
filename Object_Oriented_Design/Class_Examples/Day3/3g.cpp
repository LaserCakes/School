// Example of default function arguments in C++
//  KJC (08/13/16)
#include <stdio.h>

int add_3(int a = 1, int b = 2, int c = 3);

int main(void)
{
  int i = 10;
  int j = 20;
  int k = 30;

  printf("add_3(i, j, k) = %d \n", add_3(i, j, k));
  printf("add_3(i, j) = %d \n", add_3(i, j));
  printf("add_3(i) = %d \n", add_3(i));
  printf("add_3() = %d \n", add_3());

  return(0);
}

int add_3(int a, int b, int c)
{
  return(a + b + c);
}
