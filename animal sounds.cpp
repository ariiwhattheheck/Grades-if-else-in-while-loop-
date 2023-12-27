//a program that takes an animal name as input and uses a switch statement to print the typical sound that animal makes
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Press 1 for Cat\n";
    cout << "Press 2 for Dog\n";
    cout << "Press 3 for Cow\n";
    cout << "Press 4 for Lion\n";
    cout << "Press 5 for Elephant\n";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Meow";
        break;
    case 2:
        cout << "Bark";
        break;
    case 3:
        cout << "Mooo"; //lmao
        break;
    case 4:
        cout << "Roar";
        break;
    case 5:
        cout << "Eeennn"; //crying emojis
        break;
    default:
        cout << "Sound not available";
    }
    return 0;
}
