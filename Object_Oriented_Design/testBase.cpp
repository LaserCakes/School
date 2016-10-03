// Test base class CPP file

#include<iostream>
#include<stdio.h>
#include"testBase.h"

using namespace std;

testBase::testBase()
{
  cout << "This is the BASE constructor" << endl;
}

void testBase::testPrint()
{
  cout << "This is a call to the BASE print function" << endl;
}

testBase::~testBase()
{
  cout << "This is the BASE DEconstructor" << endl;
}
