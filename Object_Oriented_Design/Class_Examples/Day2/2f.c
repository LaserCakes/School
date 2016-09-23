// Example of structure pointers
//   KJC (08/11/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int  age;
};

struct person *p_addr(struct person *p_ptr);

int main(void)
{
  struct person kid;
  struct person *kid_ptr;

  strcpy(kid.name, "Erik");
  kid.age = 3;

  kid_ptr = p_addr(&kid);

  printf("%s is %d years old \n", kid.name, kid.age);
  printf("Address of kid is %p == %p \n", &kid, kid_ptr);

  return(0);
}

struct person *p_addr(struct person *p_ptr)
{
  return p_ptr;
}
