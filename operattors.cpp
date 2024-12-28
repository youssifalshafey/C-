#include <iostream>
using namespace std;
int main()
{
    short A;
    short B;
    cout << "Enter the First Number : " << A;
    cin >> A;
    cout << "Enter the second number : " << B;
    cin >> B;
    cout << A << " = "  << B << " = " <<( A == B) << endl;
    cout << A << " != " << B << " = " <<( A != B) << endl;
    cout << A << " > "  << B << " = " <<( A > B )<< endl;
    cout << A << " <= " << B << " = " <<( A <= B )<< endl;
    cout << A << " >= " << B << " = " <<( A >= B )<< endl;
    return 0;
}
