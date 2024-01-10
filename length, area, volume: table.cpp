#include <iostream> 

using namespace std; 

int main() 

{ 

    int length1=0, length2=1, length3=2, length4=3, length5=4; 

    int area1, area2, area3, area4, area5; 

    int volume1, volume2, volume3, volume4, volume5; 

  

    area1=6*length1*length1; 

    area2=6*length2*length2; 

    area3=6*length3*length3; 

    area4=6*length4*length4; 

    area5=6*length5*length5; 

  

    volume1=length1*length1*length1; 

    volume2=length2*length2*length2; 

    volume3=length3*length3*length3; 

    volume4=length4*length4*length4; 

    volume5=length5*length5*length5; 

  

    cout << "Face length \t\t Surface area \t\t Volume" <<endl; 

    cout << "of cube (cm) \t\t of cube (cm^2) \t of cube (cm^3)" <<endl; 

    cout << length1 << "\t\t\t\t" <<area1 <<"\t\t\t1" <<volume1 <<endl; 

    cout << length2 << "\t\t\t\t" <<area2 <<"\t\t\t1" <<volume2 <<endl; 

    cout << length3 << "\t\t\t\t" <<area3 <<"\t\t\t1" <<volume3 <<endl; 

    cout << length4 << "\t\t\t\t" <<area4 <<"\t\t\t1" <<volume4 <<endl; 

    cout << length5 << "\t\t\t\t" <<area5 <<"\t\t\t1" <<volume5 <<endl; 

  

  

    return 0; 

} 
