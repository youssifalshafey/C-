#include <iostream>

using namespace std;

int main(){
    int arr [3];
    cout<<"Enter the first number : ";
    cin>>arr[0];
    cout<<"Enter the second number : ";
    cin>>arr[1];
    cout<<"Enter the third number : ";
    cin>>arr[2];
    for (int i = 0; i < 30; i++)
    {
        cout<<"*";
    }
    cout<<"\nThe avrg Is "<<(arr[0] + arr[1] + arr[2]) / 3;
}