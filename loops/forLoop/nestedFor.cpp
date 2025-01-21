#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 12 ; i ++ ){
        cout<<"*****************************\n";
        cout<<"i = "<< i <<endl;
        cout<<"*****************************\n";
        for ( int j = 1 ; j <= 12 ; j++){
            cout<< i << " * " << j <<" = " << i*j<<endl;
        }
    }
}