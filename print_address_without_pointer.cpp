#include<iostream>
using namespace std;
int main(void){  // to find the address of a variable without pointer
    int x;
    float y;
    char z;
    cout<<"the address of x is: "<<&x<<endl;
    cout<<"the address of y is: "<<&y<<endl;
    cout<<"the address of z is: "<<(void *)&z<<endl; //to print char address

}