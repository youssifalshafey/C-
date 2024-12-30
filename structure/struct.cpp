#include <iostream>

using namespace std;

int main()
{
    struct car
    {
        string name;
        string model;
        short year ;
    };

    car carTypes1;

    cout << "Enter The Car Model : ";
    cin >> carTypes1.model;

    cout << "Enter The Car Name : ";
    cin >> carTypes1.name;

    cout << "Enter The Car Year : ";
    cin >> carTypes1.year;

    cout << "The Car Name IS " << carTypes1.name <<endl
    << "The Model Of This Car IS " 
    << carTypes1.model <<endl<< "The Year Who you want is " 
    << carTypes1.year;
    return 0;
}