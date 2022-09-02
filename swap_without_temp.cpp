#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two elements"<<endl;
    cin>>a>>b;
    cout<<"elements before swapping \n"<<"a = "<<a<<",b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"elements after swapping \n"<<"a = "<<a<<",b = "<<b;
}