#include<iostream>

using namespace std ;

struct proflieInfo
{
    string name ;
    string city; 
    string country;
    int age ;
    int mounthlySalary;
    string Gendor;
    bool Married;
};
void readValues(proflieInfo &info){
    cout<<"Enter Your Name : ";
    getline(cin , info.name);
    cout <<"Enter Your Age : ";
    cin>>info.age;
    cout<<"Enter Your City : ";
    cin>>info.city;
    cout<<"Enter Your country : ";
    cin>>info.country;
    cout<<"Enter Your Monthly Salarey : ";
    cin>>info.mounthlySalary;
    cout<<"Enter Your Gender : ";
    cin>>info.Gendor;
    cout<<"Enter Your Wifes Count : ";
    cin>>info.Married;
}

void printValues(proflieInfo info){
    cout<<"\n***********************************************\n";
    cout<<"Name "<<info.name<<endl;
    cout<<"City "<<info.city<<endl;
    cout<<"Country "<<info.country<<endl;
    cout<<"Age "<<info.age<<endl;
    cout<<"MonthlySalary "<<info.mounthlySalary<<endl;
    cout<<"MonthlySalary "<<info.mounthlySalary * 2<<endl;
    cout<<"Gendor "<<info.Gendor<<endl;
    cout<<"Married "<<info.Married<<endl;
    cout<<"\n***********************************************\n";
}
int main (){
    proflieInfo info;
    readValues(info);
    printValues(info);
} 