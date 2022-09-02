#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float celcius,fahrenheit;
    cout<<"enter the  temperature in celcius:  ";
    cin>>celcius;
    fahrenheit=(celcius*9.0/5.0)+32;
    cout<<"temperature in celcius is: "<<celcius<<endl;
    cout<<"temperature in fahrenheit is: "<<fahrenheit;
}// to convert from fahrenheit to celcius use 
// celcius=(fahrenheit-32)*5/9