#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string First, Second;
    cout << "Enter Your First Name \n";
    getline(cin, First);
    cout << "Enter the Second Name\n";
    getline(cin, Second);
    cout << "Your Name Is : " << First << " "<< Second;
    return 0;
}