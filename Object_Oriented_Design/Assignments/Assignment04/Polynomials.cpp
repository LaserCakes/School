// Steven Romeiro
// U16803837
// Homework 4
// COP 3331
// Polynomials.cpp

#include<iostream>
#include<stdlib.h>
#include<vector>
#include "Polynomials.h"

using namespace std;

//Initializing the shared object counter
int Polynomials::count = 0;

//Empty constructor for use with temporary objects
Polynomials::Polynomials()
{
  terms = 0;
  Polynomial.insert(Polynomial.begin(), terms);
}

//Overloaded constructor to be used within the application
Polynomials::Polynomials(int terms)
{
  //Increment object counter when an object is created
  counter();
  cout << "Enter how many terms will be in polynomial #" << count << ": ";
  cin >> terms;
  //Range checking for input to assure a valid and acceptable amount of terms
  while(terms <= 0 || terms > 10)
  {
    cout << "Invalid number of terms. ";
    cout << "Please enter a value greater than 0 but no more than 10";
    cout << endl;
    cout << "Enter how many terms will be in the first polynomial: ";
    cin >> terms;
  }
  this->terms = terms;
  cout << "\nYou created a polynomial of " << this->terms << " terms." << endl;
}

void Polynomials::Set()
{
  int input;
  cout << "\nStarting with the largest term, enter your coefficients in order.";
  cout << endl;

  //Loop to display the terms the user is asked to enter the coefficient for
  for(int i = 0; i < terms; i++)
  {
    cout << "\nCoefficient for term x^" << terms - 1 - i << ": ";
    cin >> input;
    //Place the input at the beginning of the vector and push others forward
    Polynomial.insert(Polynomial.begin(), input);
  }
  //Formatting
  cout << endl;
}


/* Display the index of the vector, the coefficient entered by the user at
*  that index, and the exponent for that coefficient, which is simply the
*  index of that value in the vector.
*/
void Polynomials::Get()
{
  cout << "\nIndex\tCoefficient\tExponent\t" << endl;
  for(unsigned int i = 0; i < this->Polynomial.size(); i++)
  {
    cout << i << "\t" << this->Polynomial[i] << "\t\t" << i << endl;
  }
}

//Prints the polynomial in the format ax^2 + bx + c
void Polynomials::Print()
{
  for(int i = Polynomial.size() - 1; i > 0; i--)
  {
    if(Polynomial.at(i) == 0)
    {
      continue;
    }
    cout << Polynomial.at(i) << "x^" << i << " + ";
  }
  cout << Polynomial.at(0) << endl;
}

//Overloaded addition (+) operator to add objects and return the resulting value
Polynomials Polynomials::operator+(Polynomials &rhs)
{
  int sum;
  unsigned int i;

  //Temp object that will store the new value to return
  Polynomials temp;

  /* If statement to determine which object has the largest vector. Resize
  *  temp vector to largest vector in the operation and fill it with zeroes.
  */
  if(this->Polynomial.size() >= rhs.Polynomial.size())
  {
    temp.Polynomial.assign(this->Polynomial.size(), 0);
  }
  else
  {
     temp.Polynomial.assign(rhs.Polynomial.size(), 0);
  }

  for (i = 0; i < temp.Polynomial.size(); i++)
  {
    sum = 0;
    sum = this->Polynomial[i] + rhs.Polynomial[i];
    temp.Polynomial[i] = sum;
  }

  //Returns the new temp object with the resulting values
  return temp;
}

//Overloaded subtraction (-) operator to subtract objects and return the new value
Polynomials Polynomials::operator-(Polynomials &rhs)
{
  int difference;
  unsigned int i;
  //Temp object that will store the new value to return
  Polynomials temp;

  /* If statement to determine which object has the largest vector. Resize
  *  temp vector to largest vector in the operation and fill it with zeroes.
  */
  if(this->Polynomial.size() >= rhs.Polynomial.size())
  {
    temp.Polynomial.assign(this->Polynomial.size(), 0);
  }
  else
  {
     temp.Polynomial.assign(rhs.Polynomial.size(), 0);
  }

  for (i = 0; i < temp.Polynomial.size(); i++)
  {
    difference = 0;
    difference = this->Polynomial[i] - rhs.Polynomial[i];
    temp.Polynomial[i] = difference;
  }

  //Returns the new temp object with the resulting values
  return temp;
}

//Overloaded * operator to multiply polynomial objects.
Polynomials Polynomials::operator*(Polynomials &rhs)
{
  unsigned int i, j;

  /*Size variable will store the size of the new temp vector we'll be using
  * to store all the new results of the multiplication. Needs to be resized
  * because multiplication modifies the coefficients and exponents of
  * polynomials.
  */
  int size = this->Polynomial.size() + rhs.Polynomial.size() - 1;

  //Creating the new temp object that we'll use to store the new vector values
  Polynomials temp;

  //Using the assign vector function to resize the vector and fill it with 0
  temp.Polynomial.assign(size, 0);

  /* For loop that will iterate through each polynomial term and multiply
  *  them. Starting with the left polynomial, one term will multiply all
  *  the terms of the right polynomial. The multiplied term will be added
  *  to the new empty vector at index i+j. Index i+j represents the
  *  addition of the exponents being multiplied. The resulting index
  *  is the new exponent for the multiplied terms.
  */
  for (i = 0; i < this->Polynomial.size(); i++)
  {
    //If a polynoial term is zero skip that term
    if(this->Polynomial[i] == 0)
      continue;
    for(j = 0; j < rhs.Polynomial.size(); j++)
    {
      //If a polynoial term is zero skip that term
      if(rhs.Polynomial[j] == 0)
        continue;
      temp.Polynomial[i+j] += this->Polynomial[i] * rhs.Polynomial[j];
    }
  }

  //Returns the new vector with multiplied values
  return temp;
}

//Overloaded assignment (=) operator. Assigns a vector the current object vector
Polynomials &Polynomials::operator=(Polynomials rhs)
{
  this->Polynomial = rhs.Polynomial;
  return *this;
}

//Overloaded shorthad addition operator (+=).
Polynomials& Polynomials::operator+=(Polynomials &rhs)
{
  //Creating a temporary polynomial object that will store the new values
  Polynomials temp;

  /* If statement to determine which object has the largest vector. Resize
  *  temp vector to largest vector in the operation and fill it with zeroes.
  *  After resizing, assign the current object values to temp object.
  */
  if(this->Polynomial.size() >= rhs.Polynomial.size())
  {
    temp.Polynomial.assign(this->Polynomial.size(), 0);
    temp = *this;
  }
  else
  {
    temp.Polynomial.assign(rhs.Polynomial.size(), 0);
    temp = *this;
  }

  /* Adding vector values of temp and rhs object and storing the result
  *  in the temp object. We can do this since we already overloaded the
  *  addition operator in this class.
  */
  temp = temp + rhs;

  //Assign the temp polynomial vector to the current object polynomial vector
  *this = temp;
  //Returns a reference to the new vector with added values
  return *this;
}

//Overloaded shorthad subtraction operator (-=)
Polynomials& Polynomials::operator-=(Polynomials &rhs)
{
  //Creating a temporary polynomial object that will store the new values
  Polynomials temp;

  /* If statement to determine which object has the largest vector. Resize
  *  temp vector to largest vector in the operation and fill it with zeroes.
  *  After resizing, assign the current object values to temp object.
  */
  if(this->Polynomial.size() >= rhs.Polynomial.size())
  {
    temp.Polynomial.assign(this->Polynomial.size(), 0);
    temp = *this;
  }
  else
  {
    temp.Polynomial.assign(rhs.Polynomial.size(), 0);
    temp = *this;
  }

  /* Subtracting vector values of temp and rhs object and storing the result
  *  in the temp object. We can do this since we already overloaded the
  *  subtraction operator in this class.
  */
  temp = temp - rhs;

  //Assign the temp polynomial vector to the current object polynomial vector
  *this = temp;
  //Returns a reference to the new vector with subtracted values
  return *this;
}

Polynomials& Polynomials::operator*=(Polynomials &rhs)
{
  //Creating a temporary polynomial object that will store the new values
  Polynomials temp;
  //Assigning the values of the current object to the temporary object
  temp = *this;

  /* Multiplying vector values of temp and rhs object and storing the result
  *  in the temp object. We can do this since we already overloaded the
  *  multiplication operator in this class.
  */
  temp = temp * rhs;

  //Assign the temp polynomial vector to the current object polynomial vector
  *this = temp;
  //Returns a reference to the new vector with multiplied values
  return *this;
}

//Helper function to increment count variable
void Polynomials::counter()
{
  //Increment shared variable that keeps track of how many objects instantiated
  count++;
}

//Class destructor
Polynomials::~Polynomials()
{}
