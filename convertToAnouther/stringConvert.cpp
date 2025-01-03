#include <iostream>
#include<string>
using namespace std;

int main(){
    string numbers = "123.4567";

    //convert to integer
    //String TO Integer. 
    int num1 = stoi(numbers);
    cout<<num1<<endl;
    //String TO Float
    float num2 = stof(numbers);
    cout<<num2<<endl;
    //string TO Double
    double num3 = stod(numbers);
    cout<<num3<<endl;
    return 0;
}