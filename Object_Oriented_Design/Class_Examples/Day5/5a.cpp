// Example of C++ constructor/desctructor and derived class
//  KJC (08/13/16)
#include <iostream>

using namespace std;

#define MAX_LEN 256

class myString                 // Declaration of class myString
{
  protected:
    char *c_array;             // Pointer-to-char for string array
    int  c_len;                // Length of string in c_array

  public:
    myString(void)            // Constructor (allocate c_array)
    {
      c_array = new char [MAX_LEN];
    }
    void clear(void);          // Clears c_array
    void copy(char *c);        // Copy *c into c_array upto MAX_LEN
    int  length(void);         // Return length of string
    void output(void);         // Output c_array as a string
    ~myString(void)            // Destructor (deallocate c_array)
    {
      delete c_array;
    }
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

class myString1 : public myString // Declare derived class myString1
{
  public:
    void fill(char c);          // Fill c_array with character c
};

void myString1::fill(char c)    // Define mystring1::fill()
{
  for (c_len=0; c_len<(MAX_LEN - 1); c_len++)
    c_array[c_len] = c;
  c_array[c_len] = '\0';
}

int main(void)
{
  myString1 name;       // Instance of class string

  name.clear();
  name.copy("Ken C.");
  cout << "Name = ";
  name.output();
  cout << '\n';
  cout << "Length is " << name.length() << '\n';

  name.fill('X');
  name.output();
  cout << '\n';
  cout << "Length is " << name.length() << '\n';

  return(0);
}
