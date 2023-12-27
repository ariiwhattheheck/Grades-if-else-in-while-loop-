//Take input from user about distance in km and display on screen the equivalent distance in meters
#include <iostream>

using namespace std;

int main()
{ int m;
  int km;

  cout << "Enter distance in km:";
  cin >> km;

  m=km*1000;

  cout << "Distance in metres is:" <<m << "m"<<endl;
    return 0;
}
