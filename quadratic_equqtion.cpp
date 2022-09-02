#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2,discriminent,realpart,imgpart;
    cout<<"enter a,b,c coefficients: ";
    cin>>a>>b>>c;
    discriminent=b*b-4*a*c;
     
    if(discriminent>0){
        x1=(-b+sqrt(discriminent))/(2*a);
        x2=(-b-sqrt(discriminent))/(2*a);
        cout<<"roots are real and distinct"<<endl;
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }
    else if(discriminent==0){
         x1=(-b+sqrt(discriminent))/(2*a);
         cout<<"roots are real and equal"<<endl;
         cout<<"x1=x2= "<<x1;
    }
    else{
        realpart=-b/(2*a);
        imgpart=sqrt(-discriminent)/(2*a);
        cout<<"roots are imaginary and distinct"<<endl;
        cout<<"x1= "<<realpart<<"+"<<imgpart<<"i"<<endl;
        cout<<"x2= "<<realpart<<"-"<<imgpart<<"i"<<endl;
    }
}