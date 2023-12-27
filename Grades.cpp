//Grades(if-else and while loop)
#include <iostream>

using namespace std;

int main()
{
  int grade;
  while (true)
  {cout << "Enter your grades:";
  cin >> grade;

  if (grade<=100 && grade>=90)
  {
      cout << "A+\n";
  }
  else if (grade<=89 && grade>=70)
  {
      cout << "A\n";
  }
  else if (grade<=69 && grade>=50)
  {
      cout << "A-\n";
  }
  else if (grade<=49 && grade>=30)
  {
      cout << "B\n";
  }
  else if (grade<=29 && grade>=10)
  {
      cout << "C\n";
  }
  else if (grade<=9 && grade>=0)
  {
      cout << "Failed\n";
  }
  else
  {
      cout << "Invalid number, Enter a grade from 0-100";
  }
  }
    return 0;
}
