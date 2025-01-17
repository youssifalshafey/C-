#include <iostream>
using namespace std;
enum enCountries
{
    Egypt = 1,
    Syria = 2,
    Gaza = 3,
    Palasteen = 4,
    Jordan = 5,
    Other = 6
};

void ShowCountryMinu()
{
    cout << "***********************\n";
    cout << "(1) Egypt\n";
    cout << "(2) Syria\n";
    cout << "(3) Gaza\n";
    cout << "(4) Palasteen\n";
    cout << "(5) Jordan\n";
    cout << "(6) Other\n";
    cout << "***********************\n";
}

enCountries Country()
{
    int c;
    enCountries City;
    cout << "Enter The Number Of Your Country : ";
    cin >> c;
    City = (enCountries)c;
    return City;
}

string readValues(enCountries numberOfCountry)
{

    if (numberOfCountry == enCountries::Egypt)
    {
        return "Welcome To Egypt \n";
    }
    else if (numberOfCountry == enCountries::Syria)
    {
        return "Welcome To Syria \n";
    }
    else if (numberOfCountry == enCountries::Gaza)
    {
        return "Welcome To Gaza \n";
    }
    else if (numberOfCountry == enCountries::Palasteen)
    {
        return "Welcome To Palasteen \n";
    }
    else if (numberOfCountry == enCountries::Jordan)
    {
        return "Welcome To Jordan \n";
    }
    else if (numberOfCountry == enCountries::Other)
    {
        return "Welcome To Other \n";
    }
}

int main()
{
    ShowCountryMinu();
    cout<<readValues(Country());
}