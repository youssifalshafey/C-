#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
    int age;
    bool license;
};

strInfo readInfo()
{
    strInfo Info;
    cout << "Enter Your Age : ";
    cin >> Info.age;
    cout << "Do You Have A License ? (Y/N) : ";
    cin >> Info.license;
    return Info;
}
bool checkInfo(strInfo info){
    if(info.age > 19 && info.license == 1){
        return true;
    }else{
        return false;
    }
}
void printResult(bool result){
    if(result == true){
        cout<<"Hiered \n";
    }else{
        cout<<"Reject \n";
    }
}
int main()
{
    printResult(checkInfo(readInfo()));
}