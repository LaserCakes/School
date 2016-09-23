// Example of typedef for structures
//  KJC (08/13/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int  age;
};

typedef struct person student;

int main(void)
{
  student kid;

  strcpy(kid.name, "Erik");
  kid.age = 3;

  printf("%s is %d years old \n", kid.name, kid.age);

  return(0);
}
