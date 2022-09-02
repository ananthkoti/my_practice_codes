#include<iostream>
using namespace std;
int main(){
    // finding length of the string without using strlen() function
    char str[100]; //charecter array
    int len=0; //initializing len variable to zero to use it as a index value to traverse charecter array
    cout<<"enter the string: ";
    cin>>str; // taking input string from user
    while(str[len]!='\0'){// when string length not equal to null char
        len++;
}
cout<<"the length of the string is: "<<len<<endl;
}