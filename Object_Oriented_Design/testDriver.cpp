// Test Driver program

#include<stdio.h>
#include<iostream>
#include"testBase.h"
#include"testDerived.h"

using namespace std;

int main()
{
  testBase baseObject;
  testBase *basePtr;
  basePtr = &baseObject;

  testDerived derivedObject;
  testDerived *derivedPtr;
  derivedPtr = &derivedObject;

  cout << "\nThis print will be called using object name" << endl;
  baseObject.testPrint();
  derivedObject.testPrint();

  cout << "\nThis print will be called using the pointers" << endl;
  basePtr->testPrint();
  derivedPtr->testPrint();

  cout << "\nPointing the Base class pointer to the derived class object";
  cout << " and calling the derived class function." << endl;
  basePtr = &derivedObject;
  basePtr->testPrint();
  cout << endl;


  return 0;
}
