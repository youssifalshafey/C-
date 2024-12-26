#include <iostream>

using namespace std;

int main()
{

    /*
        all this data types is a signed variables  => that mean can accept the minuse and the positive ;
    */



    // types of int =>{ 1- short 2-long == int 3-signed short & long 4-unsigned short&long }
    // signed mean with nigative and positive

    int i = 10;
    int z = -10;
    cout << i << z;
    // also you can say (short)
    signed short int x = 10;
    short r = 20;
    signed short l = 100;
    cout << "______________\n";
    unsigned short number = 1110;
    cout << "________________\n";
    cout << i << r << z << x << l << "The number is :"<<number <<endl;
    // long
    long int c = 9;
    long g = 8;
    long long ZEx = 7;

    cout << c << g << ZEx;
    cout<<endl;
    //float => there is no unsigned her 
    float NumFloating = 10 ;
    double ll = 100;
    long double pp = 10000000000000;
    cout<<NumFloating<<ll<<pp;
    return 0;
}