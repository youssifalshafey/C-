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
        if (Color == enScreenColor::red)
        {
            system("color 4F");
        }
        else if (Color == enScreenColor::blue)
        {
            system("color 1F");
        }
        else if (Color == enScreenColor::green)
        {
            system("color 2F");
        }
        else if (Color == enScreenColor::yellow)
        {
            system("color 6F");
        }
        else
        {
            cout << "Please Enter The Valied Number ? ";
            system("color 4F");
        }
   
}