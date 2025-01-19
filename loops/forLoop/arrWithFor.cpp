#include <iostream>
using namespace std;

void readValue(int arr[100], int &length)
{
    cout << "How many Numbers do you want ? Please Enter Number From 1 To 100 " << endl;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Please Enter Number " << i + 1 << endl;
        cin >> arr[i];
    }
}
void printValues(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Number [" << i << "]" << " IS " << arr[i] << endl;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

void calculatSum(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    cout << "\n Sum = " << sum << endl;
}

void calculatAvrg(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    cout << "\n Avrage = " << sum / length << endl;
}

int main()
{
    int arr[100], length = 0;
    readValue(arr, length);
    printValues(arr, length);
    calculatSum(arr, length);
    calculatAvrg(arr, length);
}