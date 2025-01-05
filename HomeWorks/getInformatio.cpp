#include <iostream>

using namespace std;

int main()
{
    string name;
    int number;
    string countery;

    cout << "Enter Your number \n";
    cin >> number;

    cin.ignore(1, '\n');

    cout << "Enter Your Name : ";
    getline(cin, name);

    cout << "Enter Your country : ";
    cin >> countery;

    cout << "Your Name Is " << name << "And Your age Is " << number << "You are From " << countery << endl;
}