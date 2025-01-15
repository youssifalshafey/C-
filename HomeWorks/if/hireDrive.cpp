#include<iostream>

using namespace std;

int main(){
    int age ;
    string drivenLicense;
    cout<<"Enter Your age : ";
    cin>>age;
    cout<<"Do You have a Drive licenes ? ";
    cin>>drivenLicense;
    if(age > 21 && drivenLicense == "yes" )
    {
        cout<<"You are Hired\n";
    }else{
        cout<<"Rejected \n";
    }
}