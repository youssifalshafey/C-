#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float A, B;
    cout << "Enter The First : \n";
    cin >> A;
    cout << "Enter The Second : \n";
    cin >> B;
    cout << "The Result Is " << A * sqrt(pow(B, 2) - pow(A, 2));
}