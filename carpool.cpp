#include <iostream> 

using namespace std; 

int main() 

{ 

    int miles; 

    double cost; 

    double avg; 

    double fee; 

    double tolls; 

    double gallons; 

    double costperday; 

  

    cout << "\t\t\t\tCar-Pools Saving Calculator" <<endl; 

    cout << "Enter the following :"<<endl; 

    cout << "Total miles driven per day:"; 

    cin >> miles; 

    cout << "Cost per gallon of gasoline $:"; 

    cin >> cost; 

    cout << "Average miles per gallon $:"; 

    cin >> avg; 

    cout << "Parking fee per day $:"; 

    cin >> fee; 

    cout << "Tolls per day $:"; 

    cin >> tolls; 

  

    gallons=miles/avg; 

    costperday=gallons*cost+fee+tolls; 

  

    cout << "\nYour driving cost per day $:" <<costperday; 

  

    return 0; 

} 
