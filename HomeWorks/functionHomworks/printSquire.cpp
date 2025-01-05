#include <iostream>

using namespace std;


void printSquire(){
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j ++){
        cout<<"*";
        if(j == 4){
            cout<<endl;
        }
        }
    }
}

int main()
{
    printSquire();
}