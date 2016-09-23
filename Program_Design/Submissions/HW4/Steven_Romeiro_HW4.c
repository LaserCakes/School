/*
* Steven Romeiro
* U16803837
* Homework 4
* COP 3514
*/

#include<stdio.h>

/*****************************PROTOTYPES***************************************/
void clockwiseRotateTriangle(int array1[3][2], int array2[3][2]);
int reflectTriangle(int array1[3][2], int array2[3][2], char axis);
void translateTriangle(int array1[3][2], int array2[3][2], int x, int y);
void printTriangle(int array[3][2]);

/*******************************************************************************
* Main function will ask the user for 3 input coordinates to a triangle.       *
* It will use these inputs to rotate, reflect, translate and print the triangle*
* utilizing the appropriate funcitons                                          *
*******************************************************************************/
int main()
{
  int triangle[3][2], rotatedTriangle[3][2], reflectedTriangle[3][2];
  int translatedTriangle[3][2], *x, *y, result, translateX, translateY, i = 1;
  char axis;
  //Loop that will request 3 inputs from the user and enter them into the array
  for(x = triangle[0], y = x + 1; x <= triangle[2]; x+=2, y = x+1, i++)
  {
    printf("Enter point #%d as x and y: ", i);
    scanf("%d %d", x, y);
  }
  //consumes the leftover newline character from input buffer
  getchar();

  //Call of printTriangle to print the (X, Y) coordinates
  printf("Starting triangle: ");
  printTriangle(triangle);

  //Call to rotate the original triangle clockwise by 90 degrees
  clockwiseRotateTriangle(triangle, rotatedTriangle);

  //Call of printTriangle to print the (X, Y) coordinates
  printf("Rotated triangle: ");
  printTriangle(rotatedTriangle);

  //Request user input for axis that will be reflected
  printf("Enter axis to reflect (x or y): ");
  scanf("%c", &axis);

  //Call to reflect triangle. Return value stored for some validation
  result = reflectTriangle(triangle, reflectedTriangle, axis);

  //Validation of user input for reflecting triangle
  if (!result)
  {
    //Accepted input, call of printTriangle to print the (X, Y) coordinates
    printf("Reflected triangle: ");
    printTriangle(reflectedTriangle);
  }
  else
  {
    //Denied input, print error
    printf("Reflected Triangle: Invalid Axis. Next time enter x or y.\n");
  }

  //Request user input for translation values
  printf("Enter translation values (x and y): ");
  scanf("%d %d", &translateX, &translateY);
  //Call to translate triangle by amount requested by user
  translateTriangle(triangle, translatedTriangle, translateX, translateY);

  //Call of printTriangle to print the (X, Y) coordinates
  printf("Translated triangle: ");
  printTriangle(translatedTriangle);

  //Normal program termination
  return 0;
}

/****************************DEFINITIONS***************************************/


/*******************************************************************************
* Function will rotate the triangle 90 degrees clockwise.                      *
*******************************************************************************/
void clockwiseRotateTriangle(int array1[3][2], int array2[3][2])
{
  int *x1, *y1, *x2, *y2;

  x1 = array1[0];
  x2 = array2[0];
  y1 = x1 + 1;
  y2 = x2 + 1;

  for(; x1 <= array1[2]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
  {
    *x2 = *y1;
    *y2 = -(*x1);
  }
}

/*******************************************************************************
* Function will reflect the triangle over the x or y axis depeding on user     *
* request                                                                      *
*******************************************************************************/
int reflectTriangle(int array1[3][2], int array2[3][2], char axis)
{
  int *x1, *y1, *x2, *y2;

  x1 = array1[0];
  x2 = array2[0];
  y1 = x1 + 1;
  y2 = x2 + 1;

  if((axis == 'x') || (axis == 'X'))
  {
    for(; x1 <= array1[2]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
    {
      *y2 = -(*y1);
      *x2 = *x1;
    }
    return 0;
  }
  else if((axis == 'y') || (axis == 'Y'))
  {
    for(; y1 <= array1[2]+1; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
    {
      *x2 = -(*x1);
      *y2 = *y1;
    }
    return 0;
  }
  else
    return -1;
}

/*******************************************************************************
* Function will translate the triangles' X and Y coordinates by the values     *
* entered by the user.                                                         *
*******************************************************************************/
void translateTriangle(int array1[3][2], int array2[3][2], int x, int y)
{
  int *x1, *y1, *x2, *y2;

  x1 = array1[0];
  x2 = array2[0];
  y1 = x1 + 1;
  y2 = x2 + 1;

  for(; x1 <= array1[2]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
  {
    *x2 = *x1 + x;
    *y2 = *y1 + y;
  }
}

/*******************************************************************************
* Function will print the requested triangle to the screen                     *
*******************************************************************************/
void printTriangle(int array[3][2])
{
  int *x, *y;

  for(x = array[0], y = x + 1; x <= array[2]; x += 2, y = x + 1)
  {
    printf("(%d, %d)", *x, *y);
  }
  printf("\n");
}
