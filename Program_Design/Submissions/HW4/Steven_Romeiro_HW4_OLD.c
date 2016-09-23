/*
* Steven Romeiro
* U16803837
* Homework 3
* COP 3514
*/

#include<stdio.h>

/*****************************PROTOTYPES***************************************/
void clockwiseRotateTriangle(int array1[3][2], int array2[3][2]);
int reflectTriangle(int array1[3][2], int array2[3][2], char axis);
void translateTriangle(int array1[3][2], int array2[3][2], int x, int y);
void printTriangle(int array[3][2]);

int main()
{
  int triangle[3][2], rotatedTriangle[3][2], reflectedTriangle[3][2];
  int translatedTriangle[3][2], *x, *y, result, translateX, translateY, i = 1;
  char axis;
  for(x = triangle[0], y = x + 1; x < triangle[3]; x+=2, y = x+1, i++)
  {
    printf("Enter point #%d as x and y: ", i);
    scanf("%d %d", x, y);
  }
  //consumes the newline character from input buffer
  getchar();

  printf("Starting triangle: ");
  printTriangle(triangle);

  clockwiseRotateTriangle(triangle, rotatedTriangle);

  printf("Rotated triangle: ");
  printTriangle(rotatedTriangle);

  printf("Enter axis to reflect (x or y): ");
  scanf("%c", &axis);

  result = reflectTriangle(triangle, reflectedTriangle, axis);

  if (!result)
  {
    printf("Reflected triangle: ");
    printTriangle(reflectedTriangle);
  }
  else
  {
    printf("Reflected Triangle: Invalid Axis. Next time enter x or y.\n");
  }

  printf("Enter translation values (x and y): ");
  scanf("%d %d", &translateX, &translateY);

  return 0;
}

/****************************DEFINITIONS***************************************/

void clockwiseRotateTriangle(int array1[3][2], int array2[3][2])
{
  int *x1, *y1, *x2, *y2, i = 0;

  x1 = array1[0];
  y1 = array1[0] + 1;
  x2 = array2[0];
  y2 = array2[0] + 1;

  for(; x1 < array1[3]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
  {
    *x2 = *y1;
    *y2 = -(*x1);
  }
}

int reflectTriangle(int array1[3][2], int array2[3][2], char axis)
{
  int *x1, *y1, *x2, *y2;

  x1 = array1[0];
  x2 = array2[0];
  y1 = array1[0]+1;
  y2 = array2[0]+1;

  if((axis == 'x') || (axis == 'X'))
  {
    for(; x1 < array1[3]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
    {
      *x2 = -(*x1);
      *y2 = *y1;
    }
    return 0;
  }
  else if((axis == 'y') || (axis == 'Y'))
  {
    for(; y1 < array1[3]+1; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
    {
      *y2 = -(*y1);
      *x2 = *x1;
    }
    return 0;
  }
  else
    return -1;
}

void translateTriangle(int array1[3][2], int array2[3][2], int x, int y)
{
  int *x1, *y1, *x2, *y2;

  x1 = array1[0];
  x2 = array2[0];
  y1 = array1[0]+1;
  y2 = array2[0]+1;

  for(; x1 < array1[3]; x1 += 2, x2 += 2, y1 = x1 + 1, y2 = x2 + 1)
  {
    *x2 = *x1 + x;
    *y2 = *y1 + y;
  }
}

void printTriangle(int array[3][2])
{
  int *x, *y;

  for(x = array[0], y=x+1; x < array[3]; x += 2, y=x+1)
  {
    printf("(%d, %d)", *x, *y);
  }
  printf("\n");
}
