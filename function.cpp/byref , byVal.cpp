#include<iostream>

using namespace std ;


void myFunction(int &x){ // this is mean by refrance 
    x = 2000;
    cout <<"X from the fun "<<x;
}
int main ()
{
    int x ;
    x = 1000;
   myFunction(x);
    cout <<"X Became "<<x;

}