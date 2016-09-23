// Example of a nested and array of structures in C
//   KJC (08/11/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int  age;
};

struct student
{
  struct person kid;
  char major[32];
};

int main(void)
{
  struct student school[20];

  strcpy(school[0].kid.name, "Erik");
  school[0].kid.age = 3;
  strcpy(school[0].major, "Play Ground");

  printf("%s is %d years old ", school[0].kid.name, school[0].kid.age);
  printf("and is majoring in %s \n", school[0].major);

  return(0);
}
