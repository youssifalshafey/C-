#include<iostream>

using namespace std;

int main(){
int salary ;
cout <<"Enter Your salary : ";
cin>>salary;
if(salary > 1000000 ){
    cout<<salary * 0.01;
}else if (salary > 500000 && salary <=1000000){
    cout<<salary * 0.02;
}
else if (salary > 100000 && salary<=500000){
    cout<<salary * 0.03;
}
else if (salary >= 50000 && salary<= 100000){
    cout<<salary * 0.05;
}

}