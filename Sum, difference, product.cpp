//a program that takes 2 numbers as input from user and prints their sum, difference, and product
#include <iostream>

using namespace std;

int main()
{ 
  int num1;
  int num2;
  int sum;
  int diff;
  int product;

  cout << "Enter first number:";
  cin >> num1;

  cout << "Enter second number:";
  cin >> num2;

  sum=num1+num2;
  diff=num1-num2;
  product=num1*num2;

  cout << "Sum:" <<sum <<endl;
  cout << "Difference:" <<diff <<endl;
  cout << "Product:" <<product <<endl;
    return 0;
}
