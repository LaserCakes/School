/*
* Steven Romeiro
* U16803837
* Homework 3
* COP 3514
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/******************************PROTOTYPES**************************************/
int quadraticFormula(int num1, int num2, int num3, float *p, float *q);
void quadraticVertex(int num1, int num2, int num3, float *p, float *q);
void quadraticInfo(float yCoordinate, int num1, float *p, char *q);

/*******************************************************************************
* Main function will request three inputs from the user and use those inputs   *
* to calculate roots, the vertex, the directrix of a quadratic equation        *
* and the direction its graph faces.                                           *
*******************************************************************************/
int main()
{
  int realRoots, a, b, c, trigger = 0;
  float root1, root2, xCord, yCord, directrix;
  char parabolaOpening, garbage;

  //Validating inputs with some moderate checking
  while(trigger == 0)
  {
    printf("Enter coefficients a, b, and c: ");
    //If scanf read numerical inputs, trigger value will update to a new value
    trigger = scanf("%d %d %d", &a, &b, &c);
    //If zeroes were entered or a non-numerical input was read
    if((a && b && c) == 0 || (trigger != 3))
    {
      printf("\nPlease enter non-zero numerical coefficients\n");
      //Dumps non-numerical input into a garbage variable
      scanf("%c", &garbage);
      trigger = 0;
    }
  }

  printf("\nf(x) = %dx^2 + %dx + %d\n", a, b, c);

  realRoots = quadraticFormula(a, b, c, &root1, &root2);
  //Prints statement depending on how many real roots were returned
  switch(realRoots)
  {
    case 2:   printf("Roots: %.2f and %.2f\n", root1, root2);
              break;
    case 1:   printf("Root: %.2f\n", root1);
              break;
    case 0:   printf("No real roots\n");
  }

  quadraticVertex(a, b, c, &xCord, &yCord);
  printf("Vertex: (%.2f, %.2f)\n", xCord, yCord);

  quadraticInfo(yCord, a, &directrix, &parabolaOpening);
  printf("Directrix: y = %.2f\n", directrix);

  if(parabolaOpening == 'U')
  {
    printf("The graph is facing up\n");
  }
  else
  {
    printf("The graph is facing down\n");
  }

  return 0;
}

/****************************DEFINITIONS***************************************/

/*******************************************************************************
 * Preforms the quadratic equation to find the roots of the expression.        *
 * The return value of the function will be an int that signifies how many REAL*
 * roots there are.                                                            *
 ******************************************************************************/
int quadraticFormula(int num1, int num2, int num3, float *p, float *q)
{
  //Test for imaginary numbers and discriminants equal to zero
  float radicand = pow(num2, 2) - (4*num1*num3);

  if(radicand > 0)
  {
    //Equation of the form (-b +- sqrt(b^2 -4ac))/(2a). Two real roots.
    *p = (-num2 + sqrt(pow(num2, 2) - (4*num1*num3)))/(2*num1);
    *q = (-num2 - sqrt(pow(num2, 2) - (4*num1*num3)))/(2*num1);
    return 2;
  }
  else if(radicand == 0)
  {
    //One real root.
    *p = *q = (-num2 + sqrt(pow(num2, 2) - (4*num1*num3)))/(2*num1);
    return 1;
  }
  else
  {
    //No real roots.
    return 0;
  }
}

/*******************************************************************************
 * Function used to find the vertex of the expression.                         *
 ******************************************************************************/
void quadraticVertex(int num1, int num2, int num3, float *p, float *q)
{
  //X-coordinate equation of the form x = -b/(2a)
  *p = (-num2)/(2*num1);
  //Y-coordinate equation in standard form y = ax^2 + bx +c
  *q = num1*(pow(*p, 2)) + num2*(*p) + num3;
}

/*******************************************************************************
 * Function used to find the directrix and the direction the graph is facing.  *
 * The direction of the graph will be represented by a char that will either   *
 * be 'U' for up or 'D' for down.                                              *
 ******************************************************************************/
void quadraticInfo(float yCoordinate, int num1, float *p, char *q)
{
  //Directrix equation of the form y - (1/(4a))
  *p = yCoordinate - (1.0/(num1*4));
  //If coefficient a is positive graph faces up, if negative it faces down.
  if(num1 > 0)
  {
    *q = 'U';
  }
  else
  {
    *q = 'D';
  }
}
