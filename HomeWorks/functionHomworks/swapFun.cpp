#include <iostream>

using namespace std;

int swapFn(int &x, int &y)
{

    int s = x;
    x = y;
    y = s;
    cout << "X became "<<x <<"Y became "<<y;
   
}

int main()
{
    int x = 10;
    int y = 20;
    cout << " X Befor is : " << x << "Y Befor is : " << y <<endl;
     swapFn(x, y);
}
