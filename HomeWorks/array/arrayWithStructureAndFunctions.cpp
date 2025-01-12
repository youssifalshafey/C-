#include<iostream>
using namespace std;
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(strInfo &info){
    cout <<"Enter Your Name :  ";
    cin >>info.firstName;
    cout<<"Enter Your Second Name : ";
    cin >> info.lastName;
    cout <<"Enter Your age :  ";
    cin >>info.age;
    cout<<"Enter Your phone Number : ";
    cin >> info.phone;
}

void printInfo (strInfo info){
    cout<<"\n*****************************************************************\n";
    cout <<"\nYour name Is "<<info.firstName <<" \n"<<info.lastName << "\n Your Age Is "<<info.age<<"\n Your PHone Numer IS " <<info.phone<<endl;
    cout<<"\n*****************************************************************\n";

}

void ReadValues(strInfo persons[3]){
    readInfo(persons[0]);
    readInfo(persons[1]);
}
void printValues(strInfo persons[3]){
     printInfo(persons[0]);
     printInfo(persons[1]);
}

int main(){
    strInfo persons[3];
    ReadValues(persons);
    printValues(persons);
}