#include<iostream>
using namespace std;

int readNumberBetweenRang(int &From , int &To){
    int number;
    cout<<"Enter Number "<<From << " To " << To <<" : ";
    cin >> number;
    while (number < From || number > To)
    {
        cout<<"Please Enter Number "<<From << " To " << To << " : ";
        cin>>number;
    }
    return number;
}

int main(){
    int from,to;
    cout<<"Enter The Start Rang : ";
    cin>>from;
    cout<<"Enter The End Rang : ";
    cin>>to;
    int newNumber =readNumberBetweenRang(from,to);
    cout<<"Your Number IS "<<newNumber;
}