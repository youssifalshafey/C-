#include<iostream>

using namespace std;

int main(){
int grade ;
cout <<"Enter Your grade : ";
cin>>grade;
if(grade >= 90 ){
    cout<<"A\n";
}else if (grade >= 80){
    cout<<"B\n";
}
else if (grade >= 70){
    cout<<"C\n";
}
else if (grade >= 60){
    cout<<"D\n";
}
else if (grade >= 50){
    cout<<"E\n";
}else{
    cout<<"F";
}
}
