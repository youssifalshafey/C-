#include<iostream>
using namespace std;

int main(){
    int day ;
    cout<<"Enter Your Day Ya Donkey : ";
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"SUNDAY\n";
        break;
    case 2:
    cout<<"Monday\n";
        break;
    case 3:
    cout<<"Tuesday\n";
        break;
    case 4:
    cout<<"wednesday\n";
        break;
    case 5:
    cout<<"Thursday\n";
        break;
    case 6:
    cout<<"Friday\n";
        break;
    case 7:
    cout<<"SaturDay\n";
        break;
    default:
    cout<<"Enter Valied Day YA Donkey\n";
        break;
    }

}