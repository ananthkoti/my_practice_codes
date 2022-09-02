#include<iostream>
using namespace std;
int main(){
    int factorial(int); // inbuilt function to perform factorial of a given number
    int fact,value; // value to take input number from user and fact is a variable to store factorial of a given number
    cout<<"enter a value: ";
    cin>>value; // taking a value from user to perform factorial of it
    fact=factorial(value); // factorial of a number is stored in fact in order to print
    cout<<"the factorial of the given value is: "<<fact<<endl;
}
int factorial(int n) // recursive function(function calling itself)
{
    if(n<0) // if entered number is a negative number
    return(-1);
    else if(n==0) // if entered number is zero
    return(1);
    else
    {
        return(n*factorial(n-1)); //n value * n-1 !
    }
}