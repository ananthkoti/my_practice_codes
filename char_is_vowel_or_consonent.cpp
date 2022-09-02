#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter a char: "; 
    //take a char from user
    cin>>n;
    if (!isalpha(n)) {// checks wheather the entered char is alphabet or not
      cout<<"Error! Non-alphabetic character."<<endl;
    }
    else if(n=='a',n=='e',n=='i',n=='o',n=='u'||n=='A',n=='E',n=='I',n=='O',n=='U')//condition to check entered char is a vowel
    {
        cout<<"it is a vowel"<<endl;
    }
    else{ //prints this block when the entered char is not vowel but alphabet
        cout<<"it is a consonent";
    }
}