/*
* Steven Romeiro
* U16803837
* Homework 3
* COP 3514
*/

#include<stdio.h>

/*****************************PROTOTYPES***************************************/
void clockwiseRotateTriangle();
int reflectTriangle();
void translateTrianble();
void printTriangle();

int main()
{
  int array[3][2], *x, *y, row=0, i=0;

  /*for(x = array[0], y = x + 1; x < array[3]; x+=2, y = x + 1)
  {
    scanf("%d %d", x, y);
    //*x = count;
    //*y = j;
    printf("Array at %p contains: %d\n", x, *x);
    printf("Array at %p contains: %d\n", y, *y);
  }

  for(x = array[0], y = x + 1; x < array[3]; x+=2, y = x + 1)
  {
    printf("Array contains: (%d, %d)\n", *x, *y);
  }*/


  array[0][0] = 6;
  array[0][1] = 5;
  array[1][0] = 4;
  array[1][1] = 3;
  array[2][0] = 2;
  array[2][1] = 1;

  x = array[0];
  y = x + 1;

  int a, *b, **c;
  a = 10;
  b = &a;
  c = &b;

  printf("Value of a is: %d\n", **c);
  printf("Address of a is %d and %d\n", *c, b);
  printf("Address of b is %d and %d\n", c, &b);
  printf("Address of c is %d\n", &c);

  printf("%p = %d\n\n", &array[2][0], *array[2]);

  printf("Array at  %p contains: %d\n", x, *x);
  printf("Another @ %p contains: %d\n", array[0]+0, *array[0]);

  x = x + 2;

  printf("Array at  %p contains: %d\n", x, *x);
  printf("Another @ %p contains: %d\n", array[0]+2, *(array[0]+2));

  x += 2;

  printf("Array at  %p contains: %d\n", x, *x);
  printf("Another @ %p contains: %d\n", array[2], *array[2]);

  x = x + 2;

  printf("Array at %d contains: %d\n", i+2, *x);
  printf("Another version is: %d\n", *array[++row]);

  x = x + 2;

  printf("Array at %d contains: %d\n", i+2, *x);
  printf("Another version is: %d\n", *array[++row]);


  //printf("Array at %d contains: %d\n", i, *x++);
  //printf("Another version is: %d\n", a[row++]);




  /*for(x[i]; x < array[0] + 6; x++)
  {
    scanf("%d %d", x, y);
    printf("values entered: %d %d\n", *x, *y);
  }

  //printf("Values entered are: (%d, %d)\n", x[0], *x+1);
  //printf("Values entered are: (%d, %d)\n", x[1], x[1]+1);
  //printf("Values entered are: (%d, %d)\n", x[2], x[2]+1);
  /*for(x = x; x < x + 6; x++)
  {
    printf("Value in array is: (%d, %d)\n", *x, (*x)+1);
  }*/

  //Try a for loop with just the array name and pointer arithmetic

  //printf("Enter point #1 as x and y: ");

return 0;
}
