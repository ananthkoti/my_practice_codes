#include<iostream>
using namespace std;
int main()
{
    int i,base,exp,result=1;
    cout<<"Enter the base and exponential value: ";
    cin>>base>>exp;
    for(i=0;i<exp;i++)
    {
        result=result*base;
    }
    cout<<base<<"^"<<exp<<"="<<result;
}