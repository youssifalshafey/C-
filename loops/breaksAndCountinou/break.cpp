#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {10,20,30,44,12,34,545,65,76,5};
    for(int i = 0 ; i < arr[10] ; i ++){
        cout<<arr[i]<<endl;
        if(arr[i] == 20){
            break;
        }
    }
}