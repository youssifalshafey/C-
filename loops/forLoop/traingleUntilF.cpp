#include<iostream>
#include<string>
using namespace std;

int main(){
    for (int i = 65 ; i <=71 ; i ++){
        for(int j =65 ; j < i; j++){
            cout<<char(j) <<" ";
        }
        cout<<endl;
    }
}