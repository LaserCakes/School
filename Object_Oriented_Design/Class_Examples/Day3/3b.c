// Example of a bit field
//  KJC (08/13/16)
#include <stdio.h>

struct
{
  unsigned int start : 1;
  unsigned int stop : 1;
} command;

int main(void)
{
  command.start = command.stop = 1;

  printf("sizeof(command) = %d \n", sizeof(command));
  printf("start = %d \n", command.start);
  printf("stop =  %d \n", command.stop);

  command.start &= 0;
  printf("start = %d \n", command.start);
  printf("stop =  %d \n", command.stop);

  return(0);
}
