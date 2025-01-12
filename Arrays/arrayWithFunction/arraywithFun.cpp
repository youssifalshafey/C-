#include <iostream>

using namespace std;

void readArrayValues(int arr[3]){
    cout<<"Enter The First Number : ";
    cin >>arr[0];
    cout<<"Enter The second Number : ";
    cin >>arr[1];
    cout<<"Enter The third Number : ";
    cin >>arr[2];
}

void printArrayData(int arr[3]){
    cout<<"\n00000000000000000000\n";
    cout<<"The First Number Is "<<arr[0]<<endl;
    cout<<"The second Number Is "<<arr[1]<<endl;
    cout<<"The Third Number Is "<<arr[2]<<endl;
}


int main (){
    int arr[3];
    readArrayValues(arr);
    printArrayData(arr);
}