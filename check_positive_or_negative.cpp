#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to check it is a positive or negative: ";
    cin>>n;
    cout<<"\n";
    if(n>0){ //if entered number is greater than the zero then it is a positive num
        cout<<"entered number is a positive number "<<endl;
    }
    else if(n<0){ //if the entered number is lessthan the zero then it is a negative num
        cout<<"entered number is a negative number "<<endl;
    }
    else { // entered numberis zero then it is neither positive nor negative num
        cout<<"entered number is neither positive nor negative number, it is a neutral"<<endl;
    }
}