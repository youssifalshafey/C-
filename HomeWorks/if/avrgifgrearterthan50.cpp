#include<iostream>

using namespace std;

int main(){
    int num1,num2,num3;
    float avrg;
    cout<<"Enter The first number ";
    cin>>num1;
    
    cout<<"Enter The second number ";
    cin>>num2;

    cout<<"Enter The third number ";
    cin>>num3;

    avrg = (num1+num2+num3) / 3;

    if(avrg >=50){
        cout<<"Passed\n";
    }
    else{
        cout<<"Faild\n";
    }

}