#include <iostream>
#include <io.h>
using namespace std; 

int main(){
    string name = "Youssif Alshafey" ;
    string city = "Abo Nasrallah";
    int age = 18 ;
    int monthlySalary = 5000;
    int yearlySalary = monthlySalary * 12;
    char gender = 'M' ;
    const int wifes = 1 ; 
    
    cout<<"*************************\n";
    cout<<"My name is : "<<name << "\n" ;
    cout<<"My country is : "<<city <<"\n";
    cout<<"My Age is : " << age <<"\n";
    cout<<"Monthly Salary :"<<monthlySalary << "\n";
    cout<<"Yearly Salary :"<<yearlySalary << "\n";
    cout<<"Gender" << gender <<endl;
    cout<<"Married "<< wifes <<"\n" ; 
    cout<<"*************************\n";
}