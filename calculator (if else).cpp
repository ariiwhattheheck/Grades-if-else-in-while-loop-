/*Write a program which prompts user to input 2 numbers and then  prompt user if he want to add,
 subtract, multiply or divide these numbers. After computing the desired action, show the result on console*/
#include <iostream>

using namespace std;

int main()
{ double num1;
  double num2;
  int press;

  cout << "Enter first number:";
  cin >> num1;

  cout << "Enter second number:";
  cin >> num2;

  cout << "Press 1 for addition\n";
  cout << "Press 2 for subtraction\n";
  cout << "Press 3 for product\n";
  cout << "Press 4 for division\n";

  cin >> press;

  if (press==1)
  {
      cout << "Sum:" <<num1+num2;
  }
  else if (press==2)
  {
      cout << "Difference:" <<num1-num2;
  }
  else if (press==3)
  {
      cout << "Product:" <<num1*num2;
  }
  else
  {
    cout << "Division:" << num1/num2;
  }


    return 0;
}
