// Brute force implementation of fizzbuzz in "C"
//  - KJC (08/12/16)
#include <stdio.h>

int main()
{
  int i;

  for (i=1; i<=100; i++)
  {
    if (((i % 3) == 0) && ((i % 5) == 0))
      printf("fizzbuzz");
    else
      if ((i % 3) == 0)
        printf("fizz");
      else if ((i % 5) == 0)
        printf("buzz");
      else
        printf("%d", i);
    printf(" ");
  }

  return(0);
}
