// Example of a simple structure in C
//   KJC (08/11/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int  age;
};

int main(void)
{
  struct person kid;

  strcpy(kid.name, "Erik");
  kid.age = 3;

  printf("%s is %d years old \n", kid.name, kid.age);

  return(0);
}
