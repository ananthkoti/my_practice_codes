#include<iostream>
using namespace std;
int main()
{
    int dividend,divisor,remainder;
    float quotient;
    cout<<"enter the dividend and divisor: ";
    cin>>dividend>>divisor;
    quotient=dividend/divisor;
    cout<<"the quotient is: "<<quotient<<endl;
    remainder=dividend%divisor;
    cout<<"the remainder is: "<<remainder;
}