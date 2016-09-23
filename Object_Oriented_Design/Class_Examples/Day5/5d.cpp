// Example of friend functions
//  KJC (08/14/16)
#include <iostream>
#include <ctype.h>      // For toupper()

using namespace std;

#define MAX_LEN 256

class myString                 // Declaration of class myString
{
  protected:
    char c_array[MAX_LEN];     // Array for string
    int  c_len;                // Length of string in c_array

  public:
    void clear(void);          // Clears c_array
    void copy(char *c);        // Copy *c into c_array upto MAX_LEN
    int  length(void);         // Return length of string
    void output(void);         // Output c_array as a string

  friend void caps(myString &a_string);
};

void myString::clear(void)        // Define string::clear()
{
  c_len = 0;
  c_array[c_len] = '\0';
}

void myString::copy(char *c)      // Define string::copy()
{
  for (c_len=0; c_len<(MAX_LEN - 1); c_len++)
    if ((c_array[c_len] = *c++) == '\0') break;
  c_array[c_len] = '\0';
}

int myString::length(void)        // Define string::length()
{
  return(c_len);
}

void myString::output(void)       // Define string::output()
{
  cout << c_array;
}

void caps(myString &a_string);

int main(void)
{
  myString name;          // Instance of class string

  name.clear();

  name.copy("Ken C.");
  cout << "Name = ";
  name.output();
  cout << '\n';
  cout << "Length of name is " << name.length() << '\n';

  caps(name);
  cout << "Name = ";
  name.output();
  cout << '\n';
  cout << "Length of name is " << name.length() << '\n';

  return(0);
}

void caps(myString &a_string)
{
  int i;

  for (i=0; i<(a_string.c_len); i++)
    a_string.c_array[i] = toupper(a_string.c_array[i]);
}
