#include<iostream>
#include<math.h> // to use mathematic concepts we include this header file
using namespace std;
int main()
{
    double x,y;
    cout<<"enter the base value x: "; //take two values from the user i.e the base value and power value
    cin>>x;
    cout<<"enter the power value y: ";
    cin>>y;
    cout<<pow(x,y);// pow function will calculate power of the given number as x^y
}