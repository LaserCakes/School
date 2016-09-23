/*
* Steven Romeiro
* U16803837
* Homework 2
* COP 3514
*/
#include<stdio.h>
#include<stdlib.h>

/************************ FUNCTION DECLARATIONS *******************************/
void magicSquare(int size, int array[size][size]);
void printMagicSquare(int size, int array[size][size]);
int sumMagicSquare(int size, int array[size][size]);

int main()
{
  //Initializes variable and prompts user for an entry.
  int squareSize;
  printf("Enter the size of the magic square to be created. ");
  printf("Square size can only be an odd number between 1 - 11\n");
  printf("Magic square size: ");
  scanf("%d", &squareSize);
  printf("\n");

  //If user enters a negative value within bounds. Fix it.
  if(squareSize != abs(squareSize))
  {
    squareSize = abs(squareSize);
    printf("You probably meant %d. ", squareSize);
    printf("Don't worry, I fixed it for you.\n\n");
  }

  //Detects if the value entered is even or outside of bounds
  if (squareSize % 2 == 0 || (squareSize < 1 || squareSize > 11))
  {
    //Invalid entries terminate the program
    printf("Invalid entry. Goodbye!\n");
    return 0;
  }

  //Initializes array with dimensions specified by user
  int array[squareSize][squareSize];

  //Creates the magic square
  magicSquare(squareSize, array);

  //Prints the magic square in format
  printMagicSquare(squareSize, array);

  //Prints the sum of all numbers in the magic square
  printf("\nSum of magic numbers = %d\n", sumMagicSquare(squareSize, array));

  //Normal program termination
  return 0;
}

/************************ FUNCTION DEFINITIONS ********************************/
//Creates the magic square by accepting user entered parameters
void magicSquare(int size, int array[size][size])
{
  //Initializes variables needed
  int count = 0, value = 1, posX = 0, posY = 0, lastPosX = 0, lastPosY = 0;

  //Clears the array by entering zeroes in every element.
  for(posY; posY < size; posY++)
  {
    posX = 0;
    for(posX; posX < size; posX++)
    {
      array[posX][posY] = 0;
    }
  }

  //Resets X and Y position to begin in the top center of the magic square
  posX = size/2;
  posY = 0;

  /* Loop that will place a new value of the array one column to the right
  *  and one row above, wrapping around when a boundry is reached */
  for(count; count < (size*size); count++, value++, posX = ++posX % size, posY--)
  {
    if (posY < 0)
    {
      //Resets Y position once boundry is reached "wrap around"
      posY = (size - 1);
    }
    /* Detects if a value is already stored in the current array position
    *  and stores that value below the previously stored array element */
    if (array[posX][posY] != 0)
    {
      /*Assignes position before the increment to current position and adds
      * one row */
      posX = lastPosX;
      posY = lastPosY + 1;
    }
    //Places value in current position once all checks are passed
    array[posX][posY] = value;
    //Stores current positions in a variable before it's incremented
    lastPosX = posX;
    lastPosY = posY;
  }
}

//Function that prints the magic square in column/row matrix format
void printMagicSquare(int size, int array[size][size])
{
  int posX = 0, posY = 0;

  //Loop that increments each row once every column has been printed
  for(posY; posY < size; posY++)
  {
    posX = 0;
    //Loop that increments each column in current row
    for(posX; posX < size; posX++)
    {
      printf("%5d", array[posX][posY]);
    }
    printf("\n");
  }
}

//Function that adds all of the numbers in the magic square
int sumMagicSquare(int size, int array[size][size])
{
  int sum = 0, i = 0, posX = 0, posY = 0;

  //Loop that increments each column in current row
  while(posY < size)
  {
    posX = 0;
    //Loop that will add every item in one row
    while(posX < size)
    {
      sum += array[posX][posY];
      posX++;
    }
    posY++;
  }
  return sum;
}
