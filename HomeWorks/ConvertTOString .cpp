#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str1 = "43.22";

    int int_Number = stoi(str1);
    float float_Number = stof(str1);
    double double_number = stod(str1);

    cout << int_Number << endl
         << float_Number << endl
         << double_number << endl;

    // convert to string

    int N1 = 20;

    string str = to_string(N1);
    cout << str << endl;

    float N3 = 55.23;
    int num1 = int(N3);
    string str2 = to_string(N3);

    cout << num1 << endl
         << N3 << endl;
}