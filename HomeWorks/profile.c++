#include <iostream>
#include <io.h>
using namespace std;

int main()
{
    // variables
    string name, city;
    unsigned short age, monthlySalary, yearlySalary;
    bool wifes ;
    char gender = 'M';

    // inputs

    cout << "Enter Your name Is : ";
    cin >> name;
    cout << "\n";

    cout << "Enter your city : ";
    cin >> city;
    cout << "\n";

    cout << "You Age Here : ";
    cin >> age;
    cout << "\n";

    cout << "Your Monthly Salary IS : ";
    cin >> monthlySalary;
    cout << "\n";

    cout << "Your Gender IS : ";
    cin >> gender;
    cout << "\n";

    cout << "Counter Of Your Wifes IS : ";
    cin >> wifes;
    cout << "\n";

    yearlySalary = monthlySalary * 2;
    // Results

    cout << "Your Profile IS : \n";
    cout << "*************************\n";
    cout << "My name is : " << name << "\n";
    cout << "My country is : " << city << "\n";
    cout << "My Age is : " << age << "\n";
    cout << "Monthly Salary :" << monthlySalary << "\n";
    cout << "Yearly Salary :" << yearlySalary << "\n";
    cout << "Gender " << gender << endl;
    cout << "Married " << wifes << "\n";
    cout << "*************************\n";
}