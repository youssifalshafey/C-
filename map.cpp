#include <iostream>
#include <map>

using namespace std;
enum Color
{
    red,
    blue,
    green,
    yellow
};
int main()
{
    Color myColor;
    myColor = Color::green;
    cout << myColor;
}