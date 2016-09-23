// More elegant (tighter) implementation of fizzbuzz in "C"
//  - KJC (08/12/16)
#include <stdio.h>
#include <string.h>

int main()
{
  int i;
  char outString[256];

  for (i=1; i<=100; i++)
  {
    strcpy(outString,"");
    if (!(i % 3))
      strcat(outString, "fizz");
    if (!(i % 5))
      strcat(outString,"buzz");
    if (!(strlen(outString)))
      sprintf(outString, "%d", i);
    printf("%s ", outString);
  }

  return(0);
}
