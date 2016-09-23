// Example of a simple structure in C with direct declaration
//   KJC (08/11/16)
#include <stdio.h>
#include <string.h>

struct
{
  char name[32];
  int  age;
} kid;

int main(void)
{
  strcpy(kid.name, "Erik");
  kid.age = 3;

  printf("%s is %d years old \n", kid.name, kid.age);

  return(0);
}
