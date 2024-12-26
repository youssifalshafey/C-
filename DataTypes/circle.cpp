#include <iostream>
using namespace std;

const float PI = 3.14;

int main()
{
    float d;
    cout << "Enter the diameter ";
    cin >> d;
    cout << "The area is " << (PI * d * d) / 4;
}