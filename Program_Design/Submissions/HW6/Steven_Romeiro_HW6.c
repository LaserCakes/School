/*
* Steven Romeiro
* U16803837
* Homework 6
* COP 3514
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LENGTH 20

/******************************PROTOTYPES**************************************/
int readLine(char str[], int n);
void sorting(char *array[], int arraySize);
/******************************************************************************/

int main(int argc, char *argv[])
{
  char *wordPointer;
  char **arrayPointer;
  int arraySize = 5, i = 0, wordSize, j;
  //Allocating memory for the array of pointers
  arrayPointer = malloc(sizeof(char *) * arraySize);
  if(arrayPointer == NULL)
  {
    //Checking if allocation returned NULL
    printf("Memory allocation unsuccessful. Exiting program.\n");
    return 1;
  }

  do
  {
    if(i == arraySize)
    {
      //Upon reaching the last element in the array, reallocate more space
      arraySize += 5;
      arrayPointer = realloc(arrayPointer, sizeof(char *) * arraySize);
      if(arrayPointer == NULL)
      {
        //Checking if allocation returned NULL
        printf("Memory allocation unsuccessful. Exiting program.\n");
        return 1;
      }
    }
    //Allocating memory for the array of characters
    wordPointer = malloc(sizeof(char) * LENGTH+1);
    if(wordPointer == NULL)
    {
      //Checking if allocation returned NULL
      printf("Memory allocation unsuccessful. Exiting program.\n");
      return 1;
    }
    printf("Enter a word: ");
    //Function call to store the characters in the array
    //Store the number of characters entered into the wordSize variable
    wordSize = readLine(wordPointer, LENGTH);
    //If no characters were entered, break out of the loop before storing
    if(wordSize == 0)
    {
      break;
    }
    //If a new string exists, store it as one of the elements in arrayPointer
    arrayPointer[i] = wordPointer;
    i++;
  }while(wordSize != 0); //Repeat process as long as the user enters a word

  //Function call to sort the array in alphabetical order
  sorting(arrayPointer, i);

  //Print the sorted array and free the allocated memory for each string
  printf("\nStrings after the sort:\n");
  for(j = 0; j < i; j++)
  {
    printf("%s\n", arrayPointer[j]);
    free(arrayPointer[j]);
  }
  //Free memory allocated for the array of pointers
  free(arrayPointer);

  //Successful program termination
  return 0;
}

/*******************************DEFINITIONS************************************/

//Function that will read a string & place it in the array terminated with NULL
int readLine(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i < n)
    {
      str[i++] = ch;
    }
  }

  str[i] = '\0';
  return i;
}


//Function that will sort the array of strings in alphabetical order
void sorting(char **array, int arraySize1)
{
  int i, j;
  char tempName[LENGTH+1];
  //printf("Entered the sorting array\n");
  //Will compare all elements with the comparate (first element, then second and so on.)
  for(i = 0; i < arraySize1-1; i++)
  {
    //printf("Entered the first for loop, iteration %d\n", i);
    //Will iterate through all of the elements before incrementing the comparate
    for(j = i + 1; j < arraySize1; j++)
    {
      //printf("Entered the second for loop, iteration %d\n", j);
      //If the comparate name is alphabetically greater than the name being compared,
      //switch their positions in the array
      if(strcmp(array[i], array[j]) > 0)
      {
        //printf("Entered the if statement\n");
        strcpy(tempName, array[j]);
        strcpy(array[j], array[i]);
        strcpy(array[i], tempName);
      }
    }
  }
}
