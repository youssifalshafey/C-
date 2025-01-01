#include <iostream>

using namespace std ;
enum gendors {Male , Female} ;
enum married {one , two} ;
enum favcolor{red,blue,green};
int main(){
    string name, city;
    unsigned short age, monthlySalary, yearlySalary;
    gendors Gendors ;
    married isMarried;
    favcolor myfavoritecolor ;


    // enum variables 

    Gendors = gendors::Male;
    isMarried = married::one;
    myfavoritecolor = favcolor::red; 

    string newGender;
    
    //some checks
    
    if (Gendors == 0){
        newGender = "Male";
    }

    // inputs

    cout << "Enter Your name Is : ";
    cin >> name;
    cout << "\n";

    cout << "Enter your city : ";
    cin >> city;
    cout << "\n";

    cout << "You Age Here : ";
    cin >> age;
    cout << "\n";

    cout << "Your Monthly Salary IS : ";
    cin >> monthlySalary;
    cout << "\n";

    yearlySalary = monthlySalary * 2;
    // Results

    cout << "Your Profile IS : \n";
    cout << "*************************\n";
    cout << "My name is : " << name << "\n";
    cout << "My country is : " << city << "\n";
    cout << "My Age is : " << age << "\n";
    cout << "Monthly Salary :" << monthlySalary << "\n";
    cout << "Yearly Salary :" << yearlySalary << "\n";
    cout << "Gender " << newGender << endl;
    cout << "Married " << isMarried << "\n";
    cout << "My favirout color is "<<myfavoritecolor << endl;
    cout << "*************************\n";
}