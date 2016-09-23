// Example of a pointer to a structure
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
  struct person *kid_ptr;

  strcpy(kid.name, "Erik");
  kid.age = 3;

  kid_ptr = &kid;

  printf("%s is %d years old \n", kid_ptr->name, kid_ptr->age);
  printf("%s is %d years old \n", (*kid_ptr).name, (*kid_ptr).age);

  return(0);
}
