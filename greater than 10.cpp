//a program which prompts the user to input a number and displays if its greater than 10
#include <iostream>

using namespace std;

int main()
{ int num;

  cout << "Enter a number:";
  cin >> num;

  if (num>10)
  {
      cout << "The number you entered is greater than 10" <<endl; 
  }
    return 0;
}
