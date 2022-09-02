#include<iostream>
using namespace std;
int main(){
    unsigned int n; // factorial cannot be negative
    unsigned long long fact=1; //factorial length is huge
    cout<<"enter a number to find the factorial: ";
    cin>>n; // take a number from the user
    for(int i=1;i<=n;++i){ // factorial cannot be zero so i value starts from 1
        fact=fact*i; // every time fact value is multiplied with iterator until given value is reached
    }
    cout<<"factorial of"<< n <<"="<<fact; // to print the final result stored in fact
    return 0;
}