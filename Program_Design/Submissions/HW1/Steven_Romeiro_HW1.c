/*
Steven Romeiro
U16803837
Homework 1
COP 3514
*/

// Header to include directives for default in/out
#include<stdio.h>

// Start of main program
int main(void)
{
  // Variable declarations
  int num1, num2, num3, num4, numerator, denominator, whole, fractional, GPA;
  float decimal;

  // Prompt for user input
  printf("Enter fraction 1: ");
  // Input recorded as two separate numbers for arithmetic further below
  scanf("%d/%d", &num1, &num2);
  printf("Enter fraction 2: ");
  scanf("%d/%d", &num3, &num4);
  // Inputs displayed for verification
  printf("Fraction number 1: %d/%d\n", num1, num2);
  printf("Fraction number 2: %d/%d\n", num3, num4);
  // Addition of fractions in lines 28-29. Results displayed on line 30
  numerator = (num1*num4) + (num3*num2);
  denominator = num2 * num4;
  printf("Addition of fractions: %d/%d\n", numerator, denominator);
  // Subtraction of fractions in lines 32-33. Results displayed on line 34
  numerator = (num1*num4) - (num3*num2);
  denominator = num2 * num4;
  printf("Subtraction of fractions: %d/%d\n", numerator, denominator);
  // Multiplication of fractions in lines 36-37. Results displayed on line 38
  numerator = num1 * num3;
  denominator = num2 * num4;
  printf("Multiplication of fractions: %d/%d\n", numerator, denominator);
  // Division of fractions in lines 40-41. Results displayed on lines 42
  numerator = num1 * num4;
  denominator = num2 * num3;
  printf("Division of fractions: %d/%d\n", numerator, denominator);

  // If statement to determine whether the fraction is proper or improper
  if(num1 < num2)
  {
    printf("Fraction 1 is a proper fraction\n");
  }
  else
  {
    printf("Fraction 1 is an improper fraction\n");
    // If fraction is improper, convert to mixed fractions. Lines 53-54
    whole = num1 / num2;
    fractional = num1 % num2;
    // If mixed fraction contains whole and fractional parts, display them
    if(fractional != 0)
    {
      printf("Fraction 1 as a mixed number: %d %d/%d\n", whole, fractional,
              num2);
    }
    // If mixed fraction does not contain fractional parts. Display only whole
    else
    {
      printf("Fraction 1 as a mixed number: %d\n", whole);
    }
  }

  // Display the first fraction as a decimal approximation to two decimal places
  decimal = (float) num1/num2;
  printf("Decimal approximation of fraction 1: %.2f\n", decimal);

  // Prompt the user to enter a GPA
  printf("Enter in a GPA for the class (0-4): ");
  scanf("%d", &GPA);

  // Display users' letter grade according to what was entered
  switch(GPA)
  {
    case 4: printf("You got an \'A\'\n");
            break;
    case 3: printf("You got a \'B\'\n");
            break;
    case 2: printf("You got a \'C\'\n");
            break;
    case 1: printf("You got a \'D\'\n");
            break;
    case 0: printf("You got an \'F\'\n");
            break;
    default: printf("That's not a valid grade\n");
  }
  // Program termination
  return 0;
}
