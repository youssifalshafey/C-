#include <iostream>
using namespace std;

int main()
{
    short number;
    cout << "Enter the Number : ";
    cin >> number;
    if (number >= 90 && number <= 100)
    {
        cout << "A\n";
    }
    else if (number >= 80 && number <= 89)
    {
        cout << "B\n";
    }
    else if (number >= 70 && number <= 79)
    {
        cout << "C\n";
    }
    else if (number >= 60 && number <= 69)
    {
        cout << "D\n";
    }
    else if (number >= 50 && number <= 59)
    {
        cout << "E\n";
    }
    else
    {
        cout << "F";
    }
}