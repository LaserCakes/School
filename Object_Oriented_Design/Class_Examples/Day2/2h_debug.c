// Example of a self-referential structure (a linked list)
//  KJC (08/13/16)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
  char name[14];
  struct person *p_ptr;
};

struct person *make_person(void);
void add_person(struct person *kid);
void output_person_list(struct person *top);

int main(void)
{
  struct person *kid;
  struct person *top;

  top = make_person();

  kid = top;
  printf("(1) kid = %p \n", kid);         // DEBUG
  printf("Enter kid's name =====> ");
  gets(kid->name);
  add_person(kid);
  while (strcmp(kid->name, "") != 0)
  {
    kid = make_person();
    printf("(2) kid = %p \n", kid);       // DEBUG
    printf("Enter kid's name =====> ");
    gets(kid->name);
    add_person(kid);
  }

  output_person_list(top);

  return(0);
}

struct person *make_person(void)
{
  struct person *temp;

  temp = (struct person *) malloc(sizeof(struct person));
  if (temp == NULL)
  {
    printf("*** ERROR *** out of memory \n");
    exit(0);
  }

  return temp;
}

void add_person(struct person *kid)
{
  static struct person *kid_list = NULL;

  if (kid_list == NULL)
  {
    kid_list = kid;
    printf("(3) kid_list = %p \n", kid_list);                     // DEBUG
  }
  else
  {
    printf("(4) kid_list = %p \n", kid_list);                     // DEBUG
    kid_list->p_ptr = kid;
    printf("(5) kid_list->p_ptr = %p \n", kid_list->p_ptr);       // DEBUG
    kid_list = kid;
    printf("(6) kid_list = %p \n", kid_list);                     // DEBUG
  }

  kid_list->p_ptr = NULL;
}

void output_person_list(struct person *top)
{
  printf("--------------------------------------------------- \n");
  while (top->p_ptr != NULL)
  {
    printf("top        = %p \n", top);
    printf("top->name  = %s \n", top->name);
    printf("top->p_ptr = %p \n\n", top->p_ptr);
    top = top->p_ptr;
  }
  printf("(7) top        = %p \n", top);                // DEBUG
  printf("(8) top->name  = %s \n", top->name);          // DEBUG
  printf("(9) top->p_ptr = %p \n\n", top->p_ptr);       // DEBUG
}
