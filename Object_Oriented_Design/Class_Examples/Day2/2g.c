// Example of dynamic allocation
//   KJC (08/11/16)
#include <stdio.h>
#include <stdlib.h>

#define SIZE  100   // Size of allocation

int main(void)
{
  int i;        // Loop counter
  int *p;       // Pointer to integer

  // Allocate memory for *p and check that allocation successfull
  p = (int *) malloc(SIZE * sizeof(int));
  if (p == NULL)
  {
    printf("*** ERROR *** out of memory \n");
    exit(1);
  }

  // Loop to initialize *p
  for (i=0; i<SIZE; i++)
    *(p+i) = i;

  // Loop to output *p
  for (i=0; i<SIZE; i++)
    printf("*p[%d] = %d \n", i, *(p+i));

  // Free allocated memory for *p
  free(p);

  return(0);
}
