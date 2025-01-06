#include <iostream>

using namespace std;

void myCalc()
{
    int num1, num2;
    cout << "Enter first numbers ";
    cin >> num1;
    cout << "Enter second numbers ";
    cin >> num2;
    cout << "The result is " << num1 << " + " << num2 << " = " << num1 + num2;
}
int sl()
{
    int num1, num2;
    cout << "Enter first numbers ";
    cin >> num1;
    cout << "Enter second numbers ";
    cin >> num2;
    return num1 + num2;
}

int main()
{
    myCalc();
    cout << "The result is " << sl();
}