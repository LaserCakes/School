// Solution to class worksheet #1 (in place reversal)
//  KJC (08/14/16)
#include <iostream>

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
    void reverse(void);        // Reverse the string
};

void myString::clear(void)     // Define myString::clear()
{
  c_len = 0;
  c_array[c_len] = '\0';
}

void myString::copy(char *c)   // Define myString::copy()
{
  for (c_len=0; c_len<(MAX_LEN - 1); c_len++)
    if ((c_array[c_len] = *c++) == '\0') break;
  c_array[c_len] = '\0';
}

int myString::length(void)     // Define myString::length()
{
  return(c_len);
}

void myString::output(void)    // Define myString::output()
{
  cout << c_array;
}

void myString::reverse(void)   // Define myString::reverse()
{
  char temp;  // Temporary character storage
  int  i;     // Loop counter

  // Reverse the string in place
  for (i=0; i<(c_len/2); i++)
  {
    temp = c_array[i];
    c_array[i] = c_array[c_len-i-1];
    c_array[c_len-i-1] = temp;
  }
}

int main(void)
{
  myString name;               // Instance of class myString

  name.clear();
  name.copy("Ken C.");
  cout << "Name = ";
  name.output();
  cout << '\n';
  cout << "Length of name is " << name.length() << '\n';
  name.reverse();
  cout << "Name = ";
  name.output();
  cout << '\n';
  cout << "Length of name is " << name.length() << '\n';

  return(0);
}
