#include <iostream> 

using namespace std; 

int main() 

{ 

    int age; 

    double mhr1; 

    double mhr2; 

    double mhr3; 

    double minMHR; 

    double maxMHR; 

    cout << "Enter age: "; 

    cin >> age; 

  

    mhr1 = 220.0 - age; 

    mhr2 = 208.0 - 0.7 * age; 

    mhr3 = 211.0 - 0.64 * age; 

  

    cout << "\nMHR values using all 3 equations:\n"; 

    cout << "Equation 1 (220 - age): " << mhr1 << " beats per minute\n"; 

    cout << "Equation 2 (208 - 0.7 * age): " << mhr2 << " beats per minute\n"; 

    cout << "Equation 3 (211 - 0.64 * age): " << mhr3 << " beats per minute\n"; 

  

    if (mhr1 < mhr2 && mhr1 < mhr3)  

    { 

        minMHR = mhr1; 

    }  

    else if (mhr2 < mhr3)  

    { 

        minMHR = mhr2; 

    }  

    else  

    { 

        minMHR = mhr3; 

    } 

  

    if (mhr1 > mhr2 && mhr1 > mhr3)  

    { 

        maxMHR = mhr1; 

    }  

    else if (mhr2 > mhr3)  

    { 

        maxMHR = mhr2; 

    }  

    else  

    { 

        maxMHR = mhr3; 

    } 

  

    cout << "\nSuggested Range of MHR: " << minMHR << " to " << maxMHR << " beats per minute\n"; 

    return 0; 

} 

 
