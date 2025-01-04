#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myName, numString1, numString2;
    cout << "Enter Your Name : ";
    getline(cin, myName);

    cout << "Your Name is " << myName << endl;
    //
    cout << "Enter the Number : ";
    getline(cin, numString1);
    cout << "The First string is " << numString1 << endl;

    cout << "Enter the third number : ";
    getline(cin, numString2);
    cout << "The Third string is " << numString2 << endl;

    cout << "*******************************" << endl;
    cout << "The length of string is " << myName.length() << endl;
    cout << "charecter at 0 , 2 , 4 , 7" << myName[0] << "," << myName[2] << "," << myName[4] << "," << myName[7] << endl;
    cout << "concatinating string1 string 2 " << numString1 + numString2 << endl;
    cout << stoi(numString1) + stoi(numString2);
    return 0;
}