#include<iostream>

using namespace std;

void swap (int &num1, int &num2);

int main(void)
{
  int a, b;

  a = 1; b = 2;

  cout << "a = " << a << " b = " << b << endl;
  swap(a, b);
  cout << "New values are a = " << a << " b = " << b << endl;
  return 0;
}

void swap(int &num1, int &num2)
{
  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;
}
