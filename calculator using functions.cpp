//Menu based calculator
#include <iostream>
#include <cmath>

using namespace std;
double sum(double a, double b); //prototypes
double difference(double a, double b);
double product (double a, double b);
double division (double a, double b);
double mod (double a, double b);

int main()
{
    int a;
    int b;
    int num;
    int result;

    cout << "Press 1 for Sum"<<endl;
    cout << "Press 2 for Difference"<<endl;
    cout << "Press 3 for Product"<<endl;
    cout << "Press 4 for Division"<<endl;
    cout << "Press 5 for Modulus"<<endl;

    cout << "Enter a number between 1-5:";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Result:" << sum(a,b);
        break;

    case 2:
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Result:" << difference(a,b);
        break;

    case 3:
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Result:" << product(a,b);
        break;

    case 4:
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Result:" << division(a,b);
        break;

    case 5:
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Result:" << mod(a,b);
        break;

    }
    return 0;
}
double sum (double a, double b) //definitions
{
    return a+b;
}
double difference (double a, double b)
{
    return a-b;
}
double product (double a, double b)
{
    return a*b;
}
double division (double a, double b)
{
    return a/b;
}
double mod (double a, double b)
{
    return fmod(a,b);
}



