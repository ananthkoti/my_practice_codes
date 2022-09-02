#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<18 && age>0){
        cout<<"you are under 18 years"<<endl;
    }
    else if(age==0){
        cout<<"you are infant"<<endl;
    }
    else if(age<0){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"your age is greater than 18 years";
    }
}