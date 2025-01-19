#include <iostream>
using namespace std;

float readValue(int arr, int length)
{
    cout << "How many Numbers do you want ? Please Enter Number From 1 To 100 " << endl;
    cin >> length;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        cout << "Please Enter Number " << arr[i] << endl;
        sum += arr[i];
    }
}

int main()
{
    int arr[100], length = 0;
    readValue(arr, length);
}