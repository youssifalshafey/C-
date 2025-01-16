#include <iostream>
using namespace std;

enum enScreenColor
{
    red = 1,
    blue = 2,
    green = 3,
    yellow = 4
};
int main()
{
    cout << "****************************************\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "****************************************\n";
    int c;
    enScreenColor Color;
    cout << "Enter The Color NUmber : ";
    cin >> c;
    Color = (enScreenColor)c;

    switch (Color)
    {
    case enScreenColor::red:
        system("color 4F");
        break;
    case enScreenColor::blue:
        system("color 1F");
        break;
    case enScreenColor::green:
        system("color 2F");
        break;
    case enScreenColor::yellow:
        system("color 6F");
        break;
    default:
        cout << "Please Enter The Valied Number ? ";
        system("color 4F");
        break;
    }
}