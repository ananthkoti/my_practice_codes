#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
     cout<<"enter two elements"<<endl;
     cin>>a>>b;
     cout<<"elements before swapping \n"<<"a = "<<a<<", b = "<<b<<endl;
     temp=a;
     a=b;
     b=temp;
     cout<<"elements after swapping \n"<<"a = "<<a<<", b = "<<b;
}