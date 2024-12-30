#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short age;
    cout << "Enter Your Age : ";
    cin >> age;
    // power function
    cout << "Your Age Is " << pow(age, 2) << endl;
    // squire root 
    cout<<"Your age is " << sqrt( pow(age, 2)) << endl;

    return 0;
}