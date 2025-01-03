#include<iostream>

using namespace std ;

// enum var 
enum color{red,blue,green};
enum status{Married,notMarried};
enum gendor{Male,Female};

struct stAddress{string street;string country;int streetNumber;};

struct stContactInfo
{
    string phone;
    string email;
    stAddress address;
};

struct stPersone
{
    string firstName;
    string secondName;
    
    stAddress address;

    stContactInfo contactInfo;

    color favColor;
    status marriedStatuse;
    gendor Gendor;
};


int main (){
    stPersone persone;

    persone.firstName="Youssif ";
    persone.secondName = "Alshafey ";
    persone.address.street = "Abo-Nasrallah";
    persone.Gendor = gendor::Male;
    persone.address.streetNumber = "1-22-34";
    cout<<persone.Gendor;
}