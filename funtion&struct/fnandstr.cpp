#include <iostream>

using namespace std;
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readValues(strInfo &info)
{

    cout << "Enter Your First Name : ";
    cin >> info.firstName;

    cout << "Enter Your Last Name : ";
    cin >> info.lastName;

    cout << "Enter Your Age : ";
    cin >> info.age;

    cout << "Enter Your Phone Number : ";
    cin >> info.phone;
}

void printValues(strInfo info)
{
    cout << "\n**********************************\n";
    cout << "First Name Is " << info.firstName << endl;
    cout << "Last Name Is " << info.lastName << endl;
    cout << "Age Is " << info.age << endl;
    cout << "Phone Is " << info.phone << endl;
    cout << "\n**********************************\n";
}

int main()
{
    strInfo info;
    readValues(info);
    printValues(info);
}