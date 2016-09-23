// Example of storage allocation and deallocation in C++
//  KJC (08/13/16)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *i_ptr;
  int i;

  printf("i_ptr = %p \n", i_ptr);

  i_ptr = new int [10];
  if (i_ptr == NULL)
  {
    printf("ERROR - not enough free storage... \n");
    exit(1);
  }
  printf("i_ptr = %p \n", i_ptr);

  delete i_ptr;

  return(0);
}
