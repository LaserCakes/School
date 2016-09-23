#include<iostream>
#include<stdlib.h>
#include"stack1.h"

using namespace std;

void stack1::swap()
{
  int temp1, temp2;
  temp1 =  pop();
  temp2 =  pop();
  push(temp1);
  push(temp2);
}
