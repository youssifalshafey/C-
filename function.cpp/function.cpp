#include <iostream>

using namespace std ;

short calc ( ){
    int x = 10, y =20;
    return x * y ;
}

string myName ( ){
    string broken ;
    cout <<"Enter person who made you broken : ";
    cin >> broken;
    return broken;
}


int main(){
    cout <<calc() ;
    cout <<"The broken man is broken by "<<myName();
    return 0;
}