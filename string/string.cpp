#include<iostream>
#include<string>

using namespace std;

int main(){
    string lngth = "ABVXVNBXNGFGNBSGFGHRYJGYHTGF";
    //print the length 
    cout<<"The length of the string is : "<<lngth.length()<<"\n";

    //access one element 
    cout<<lngth[4]<<"\n"; 

    string s1 = "10"  , s2 = "20";

    //concatination
    string s3 = s1 + s2;
    cout<< s3 << endl;

    int sum = stoi(s1) + stoi(s2);
    cout<<"The sum of Summition is "<<sum<<endl;
}
