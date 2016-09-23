/*
* Steven Romeiro
* U16803837
* Homework 5
* COP 3514
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME 80
typedef struct
{
  char firstName[NAME];
  int age;
}People;

/******************************PROTOTYPES**************************************/
void unsortedPrint(People array[], int arguments);
void printPeople(People array[], int arguments);
void nameSortedPrint(People array[], int arraySize, int arguments, char *argumentNames[]);
void ageSortedPrint(People array[], int arraySize, int arguments, char *argumentNames[]);

int main(int argc, char *argv[])
{
  int i, j, size;

  //Checking to ensure the expected amount of arguments were entered. Terminates program
  if(argc % 2 == 0 || argc == 1)
  {
    printf("Invalid arguments. Please try again.\n");
    printf("Usage: %s name1 age1 name2 age2\n", argv[0]);
    return 1;
  }
  else
  {
    size = argc/2 - 1;
  }
  People person[size];

  //Loop that will store arguments entered into the appropriate element member
  for(i = 1, j = 0; i < argc; i++, j++)
  {
    //Checking to validate whether user entered a string instead of an age or
    //if age entered was less than or equal to zero. Terminates program.
    if(atoi(argv[i+1]) <= 0)
    {
      printf("Age entered is less than or equal to zero. Please try again\n");
      return 1;
    }
    //Passing validation checks, store the arguments in the appropriate member
    else
    {
      strcpy(person[j].firstName, argv[i]);
      person[j].age = atoi(argv[++i]);
    }
  }

  printf("You have entered %d person(s) into the program\n", size + 1);

  //Printing and function calls for appropriate sorting
  printf("Unsorted names:\n");
  printPeople(person, argc);
  nameSortedPrint(person, size, argc, argv);
  printf("Sorted by first name:\n");
  printPeople(person, argc);
  ageSortedPrint(person, size, argc, argv);
  printf("Sorted by age:\n");
  printPeople(person, argc);

  //Successful program termination
  return 0;
}

/*******************************DEFINITIONS************************************/

void printPeople(People array[], int arguments)
{
  int i, j;
  //Prints the members of each structure element after sorting
  for(i = 1, j = 0; i < arguments; i+=2, j++)
  {
    printf("Name:  %s  |  ", array[j].firstName);
    printf("Age:  %d\n", array[j].age);
  }
}

//Function that will print a name sorted variation of the structure elements
void nameSortedPrint(People array[], int arraySize, int arguments, char *argumentNames[])
{
  int i, j, tempAge;
  char tempName[NAME];

  //Will compare all elements with the comparate (first element, then second and so on.)
  for(i = 0; i < arraySize; i++)
  {
    //Will iterate through all of the elements before incrementing the comparate
    for(j = i + 1; j < arraySize + 1; j++)
    {
      //If the comparate name is alphabetically greater than the name being compared,
      //switch their positions in the array
      if(strcmp(array[i].firstName, array[j].firstName) > 0)
      {
        strcpy(tempName, array[j].firstName);
        strcpy(array[j].firstName, array[i].firstName);
        strcpy(array[i].firstName, tempName);
        tempAge = array[j].age;
        array[j].age = array[i].age;
        array[i].age = tempAge;
      }
    }
  }
}

//Function that will print an age sorted variation of the structure elements
void ageSortedPrint(People array[], int arraySize, int arguments, char *argumentNames[])
{
  int i, j, tempAge;
  char tempName[NAME];

  //Will compare all elements with the comparate (first element, then second and so on.)
  for(i = 0; i < arraySize; i++)
  {
    //Will iterate through all of the elements before incrementing the comparate
    for(j = i + 1; j < arraySize + 1; j++)
    {
      //If the comparate age is greater than the age being compared to, switch
      //their positions in the array
      if(array[i].age > array[j].age)
      {
        strcpy(tempName, array[j].firstName);
        strcpy(array[j].firstName, array[i].firstName);
        strcpy(array[i].firstName, tempName);
        tempAge = array[j].age;
        array[j].age = array[i].age;
        array[i].age = tempAge;
      }
    }
  }
}

/******************************SOURCES******************************************
* http://www.sanfoundry.com/c-program-sort-names-alphabetical-order/           *
*******************************************************************************/
