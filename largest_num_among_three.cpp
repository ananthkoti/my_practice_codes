#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"enter A,B,C values"<<endl;
    cin>>A>>B>>C;
    if(A>B&&A>C){
        cout<<"the latgest number is A: "<<A<<endl;
    }
    else if(B>C){
            cout<<"the largest number is B: "<<B<<endl;
    }
    else{
        cout<<"the largest number is C: "<<C<<endl;
    }

}