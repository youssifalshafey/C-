#include <iostream>

using namespace std;

enum Color
{
    red,
    blue,
    yellow,
    green,
};
enum Dirictions
{
    North,
    East,
    Weast,
    south
};
int main()
{
    Color newColor;
    Dirictions myDerections;
    myDerections = Dirictions::North;

    newColor = Color::green;
    cout << newColor;
    cout << myDerections;

    return 0;
}