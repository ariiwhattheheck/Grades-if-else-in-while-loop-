/*Write a program that reads three integers representing hours, minutes, and seconds of a time
 Then it should calculate the equivalent time in seconds*/
#include <iostream>

using namespace std;

int main()
{ int hrs;
  int mins;
  int sec;
  int seconds;

  cout << "Enter no. of hours:";
  cin >> hrs;

  cout << "Enter no. of minutes:";
  cin >> mins;

  cout << "Enter no. of seconds:";
  cin >> sec;

  seconds=(hrs*60*60)+(mins*60)+(sec);

  cout << "Total no. of seconds are:" <<seconds <<endl;
    return 0;
}
