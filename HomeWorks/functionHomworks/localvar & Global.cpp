#include <iostream>

using namespace std ;

int x = 100;

void myFunction(){
    int x = 10 ;
        cout <<"X from fun is "<< x;
}

int main (){
    int x=20;
    cout <<"X from main is "<<x;
    myFunction();
    cout <<"X from globale is "<< ::x;
}