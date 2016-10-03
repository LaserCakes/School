// Test Derived class cpp

#include<iostream>
#include<stdio.h>
#include"testDerived.h"

using namespace std;

testDerived::testDerived()
{
  cout << "This is the DERIVED constructor" << endl;
}

void testDerived::testPrint()
{
  cout << "This is a call to the DERIVED print function" << endl;
}

testDerived::~testDerived()
{
  cout << "This is the DERIVED DEconstructor" << endl;
}
