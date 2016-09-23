// Example of a structure for discussion on classes
//  KJC (08/13/16)
#include <stdio.h>
#include <string.h>

struct person
{
  char name[50];
  int  age;
};

void main(void)
{
  struct person student;

  strcpy(student.name, "Tom");
  student.age = 18;

  printf("Student %s is %d old \n", student.name, student.age);
}
