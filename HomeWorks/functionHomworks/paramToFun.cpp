#include <iostream>
using namespace std;

int mylaculator(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The result is " << mylaculator(num1, num2);
}