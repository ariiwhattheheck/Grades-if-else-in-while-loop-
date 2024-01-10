#include <iostream> 

using namespace std; 

int main() 

{ 

    int num; 

    int digit1; 

    int digit2; 

    int digit3; 

    int digit4; 

  

    cout << "Enter a four-digit integer:"; 

    cin >> num; 

  

    digit1=num/1000; 

    digit2=(num/100)%10; 

    digit3=(num/10)%10; 

    digit4=(num)%10; 

  

    cout << digit4 << "  " <<digit3 << "  " <<digit2 << "  " <<digit1 <<endl; 

    return 0; 

} 

 
