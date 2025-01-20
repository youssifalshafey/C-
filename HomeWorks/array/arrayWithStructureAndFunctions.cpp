#include <iostream>
using namespace std;
struct strInfo
{
    string Id;
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(strInfo &info)
{
    cout << "Enter Your Id : ";
    cin >> info.Id;
    cout << "Enter Your Name :  ";
    cin >> info.firstName;
    cout << "Enter Your Second Name : ";
    cin >> info.lastName;
    cout << "Enter Your age :  ";
    cin >> info.age;
    cout << "Enter Your phone Number : ";
    cin >> info.phone;
}

void printInfo(strInfo info , int number)
{
    cout << "*******************  Person's " << number + 1 << " Infoe *********************************\n";
    cout << "\nYour name Is " << info.firstName << " " << info.lastName << "\n Your Age Is " << info.age << "\n Your PHone Numer IS " << info.phone << endl;
    cout << "\n*****************************************************************\n";
}

void ReadValues(strInfo persons[100], int &length)
{
    cout << "Enter The Count Of Persone You Want : ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout<<"Person's "<< i+1 << "Info \n"<<endl;
        readInfo(persons[i]);
        cout << "\n***********************************\n";
    }
}
void printValues(strInfo persons[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        printInfo(persons[i] , i);
    }
}

int main()
{
    strInfo persons[3];
    int length = 0;
    ReadValues(persons, length);
    printValues(persons, length);
}