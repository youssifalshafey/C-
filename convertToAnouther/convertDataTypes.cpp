#include<iostream>

using namespace std ;

int main(){
    int num1 ;
    double num2 = 19.99;
    cout<<"Num2 "<<num2<<endl;
    
    num1 = num2; //implecit convert 

    num1 = (int)num2; // Explicite converet

    num1 = int(num2); // Explicite
    // in this case the number will descrease .
    cout<<num1 << endl;
}