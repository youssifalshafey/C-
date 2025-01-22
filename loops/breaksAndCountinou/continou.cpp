#include<iostream>
using namespace std;
int main(){
    int sum = 0 ;
    int number ;
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Enter Number Less Than 50 :";
        cin>>number;
        if(number > 50){
            continue;
        }
        sum += number; 
    }
    cout<<"The Sum Of Numbers Is "<<sum<<endl;
}