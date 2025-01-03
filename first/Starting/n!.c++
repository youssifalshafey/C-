// #include <iostream>

// using namespace std;

// int main()
// {
//     int number, container = 1  ;
//     cout << "Enter Number !";
//     cin >> number;
//     for (int i = number ; i >=5; i--)
//     {
//         for (int j = number -1 ; j >=1 ; j--){
//             container *= i * j ;
//         }
//     }
//     cout << " result is " << container;
// }

#include <iostream>

using namespace std;

int main()
{
    int number, container = 1;

    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        container *= i;
    }
    cout << "Result Is " << container;
    return 0;
}
