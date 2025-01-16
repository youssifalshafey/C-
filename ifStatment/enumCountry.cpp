#include<iostream>
using namespace std;
enum enCountries{Egypt = 1, Syria = 2 , Gaza =3 , Palasteen = 4 , Jordan = 5 , Other = 6};
int main(){
    cout<<"***********************\n";
    cout<<"(1) Egypt\n";
    cout<<"(2) Syria\n";
    cout<<"(3) Gaza\n";
    cout<<"(4) Palasteen\n";
    cout<<"(5) Jordan\n";
    cout<<"(6) Other\n";
    cout<<"***********************\n";
    cout<<"Enter The Number : ";
    int number ;
    enCountries Country;
    string newCountry;
    cin>>number;
    Country=(enCountries)number;

    if(Country == enCountries::Egypt){
        cout<<"Welcome To EGYPT \n";
    }

    else if(Country == enCountries::Syria){
        cout<<"Welcome To SYRIA \n";
    }

    else if(Country == enCountries::Gaza){
        cout<<"Welcome To GAZA \n";
    }

    else if(Country == enCountries::Palasteen){
        cout<<"Welcome To PALASTEEN \n";
    } else if (Country == enCountries::Jordan){
        cout<<"Welcome TO JORDAN \n";
    }
    else if(Country == enCountries::Other){
        cout<<"Please Enter Your Country Name : ";
        cin>>newCountry;
        cout<<"Welcome In "<<newCountry;
    }else{
        cout<<"Please Enter The Valied Number ? \n";
        system("color 4F");
    }
}