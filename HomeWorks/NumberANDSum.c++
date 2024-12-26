#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the first number : \n";
    cin >> num1;
    cout << "Enter the second number : \n";
    cin >> num2;
    cout << "Enter the Third Number : \n";
    cin >> num3;

    cout << endl;
    cout
        << num1 << " +\n";
    cout << num2 << " +\n";
    cout << num3 << "\n";
    cout << "_________________________________________________\n\n";
    cout << "Total IS : " << num1 + num2 + num3 << "\n";
}