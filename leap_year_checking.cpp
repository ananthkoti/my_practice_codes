#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the year to check wheather it is leap or a non-leap year: ";
    cin>>n;
    cout<<"\n";
    if(n%4==0 && n%400==0){ // condition to check entered yesr is a leap year or not
        cout<<"entered year is a leap year: "<<n<<endl;
    }
    else{
        cout<<"it is not a leap year: "<<n<<endl;
    }
}