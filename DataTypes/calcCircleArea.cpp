#include<iostream>
using namespace std;

const float PI = 3.14;
int main (){
    float area ;
    cout <<"Enter The Area : ";
    cin >> area;
    cout <<"The Result of this area is "<< ( PI * (area * area) ) / 4 << endl;
}