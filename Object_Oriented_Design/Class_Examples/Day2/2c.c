// Example of a function to initialize a structure
//   KJC (08/11/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int  age;
};

struct person init_person(char *name, int years);

int main(void)
{
  struct person kid;

  kid = init_person("Erik", 3);

  printf("%s is %d years old \n", kid.name, kid.age);

  return(0);
}

struct person init_person(char *name, int years)
{
  struct person temp;

  strcpy(temp.name, name);
  temp.age = years;

  return temp;
}
