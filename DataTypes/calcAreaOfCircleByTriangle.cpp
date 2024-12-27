#include<iostream>
using namespace std;


const float PI = 3.14;

int main(){
    float a , b ;
    cout <<"Enter the First :  ";
    cin>>a;
    cout <<"Enter the Second :  ";
    cin>>b;

    cout <<"The Area Is " << PI * ((b*b) / 4) * ((2*a-b) / (2*a+b));
}