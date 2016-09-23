// Example of reference variables in C++
//  KJC (08/13/16)
#include <stdio.h>

void swap1(int *a, int *b);    // With pointers
void swap2(int &a, int &b);    // With reference

int main(void)
{
  int i = 10, j = 20;

  swap1(&i, &j);
  printf("i = %d  j = %d \n", i, j);

  swap2(i, j);
  printf("i = %d  j = %d \n", i, j);

  return(0);
}

void swap1(int *a, int *b)
{
  int temp;

  temp = *b;
  *b = *a;
  *a = temp;
}

void swap2(int &a, int &b)
{
  int temp;

  temp = b;
  b = a;
  a = temp;
}
