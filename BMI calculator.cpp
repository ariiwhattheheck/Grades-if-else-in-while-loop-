#include <iostream> 

using namespace std; 

int main() 

{ 

    cout << "BMI VALUES:" <<endl; 

    cout << "Underweight:\tless than 18.5" <<endl; 

    cout << "Normal:\t\tbetween 18.5 and 24.9"<<endl; 

    cout << "Overweight:\tbetween 25 and 29.9"<<endl; 

    cout << "Obese:\t\t30 or greater\n"<<endl; 

  

    int weight; 

    float bmi; 

    float height; 

  

    cout <<"Enter your weight in kilograms:"; 

    cin >> weight; 

    cout << "Enter your height in metres:"; 

    cin >> height; 

  

    bmi=(weight)/(height*height); 

  

    cout << "Your BMI value is:"<<bmi <<endl; 

    return 0; 

} 
