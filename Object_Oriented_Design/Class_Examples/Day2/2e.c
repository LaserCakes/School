// Example of sizeof for structures
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
  struct person kid[10];

  strcpy(kid[0].name, "Erik");
  kid[0].age = 3;

  printf("%s is %d years old \n", kid[0].name, kid[0].age);
  printf("First letter in name is %c \n", kid[0].name[0]);
  printf("size of kid is %d \n", sizeof(kid));

  return(0);
}
