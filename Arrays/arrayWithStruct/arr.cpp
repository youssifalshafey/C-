#include<iostream>
using namespace std;
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void printValues(strInfo persons[3]){
    cout<<"/n*****************************************************************/n";
    cout <<"\nYour name Is "<<persons[0].firstName <<" "<<persons[0].lastName << " Your Age Is "<<persons[0].age<<" Your PHone Numer IS" <<persons[0].phone<<endl;
    cout<<"/n*****************************************************************/n";
    cout <<"\nYour name Is "<<persons[1].firstName <<" "<<persons[1].lastName << " Your Age Is "<<persons[1].age<<" Your PHone Numer IS" <<persons[0].phone<<endl;
    cout<<"/n*****************************************************************/n";
    cout <<"\nYour name Is "<<persons[2].firstName <<" "<<persons[2].lastName << " Your Age Is "<<persons[2].age<<" Your PHone Numer IS" <<persons[0].phone<<endl;
    cout<<"/n*****************************************************************/n";
}


void ReadValues(strInfo persons[3]){
    cout <<"Enter Your Name :  ";
    cin >>persons[0].firstName;
    cout<<"Enter Your Second Name : ";
    cin >> persons[0].lastName;
    cout <<"Enter Your age :  ";
    cin >>persons[0].age;
    cout<<"Enter Your phone Number : ";
    cin >> persons[0].phone;
    // the Second persone
    cout <<"Enter Your Name :  ";
    cin >>persons[1].firstName;
    cout<<"Enter Your Second Name : ";
    cin >> persons[1].lastName;
    cout <<"Enter Your age :  ";
    cin >>persons[1].age;
    cout<<"Enter Your phone Number : ";
    cin >> persons[1].phone;
    //The Third persone
    cout <<"Enter Your Name :  ";
    cin >>persons[2].firstName;
    cout<<"Enter Your Second Name : ";
    cin >> persons[2].lastName;
    cout <<"Enter Your age :  ";
    cin >>persons[2].age;
    cout<<"Enter Your phone Number : ";
    cin >> persons[2].phone;
}

int main(){
    strInfo persons[3];
    ReadValues(persons);
    printValues(persons);
}