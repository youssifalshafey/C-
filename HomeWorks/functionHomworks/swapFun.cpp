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
    int x , y;
    cout <<"Enter X : ";
    cin >> x; 
    cout <<"Enter Y : ";
    cin>>y ;  
    cout << " X Befor is : " << x << "Y Befor is : " << y <<endl;
     swapFn(x, y);
    cout << " X After is : " << x << "Y after is : " << y <<endl;
}
