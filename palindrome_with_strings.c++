#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20],str2[20];
    int i,j,len=0,flag=0;//i for iteration of str1, j for iteration of str2, len to store str1, flag to recognize unmatch charecter.
    cout<<"enter the string:"<<endl;
    gets(str1); //to read the charecters from users
    len=strlen(str1)-1; // to move to the last position of the string we use -1
    for(i=len,j=0;i>=0;i--,j++)// i for traversing str1 from backward, j for storing string charecters one by one
        str2[j]=str1[i]; // storing string1 charecters to string2 charecters
    if(strcmp(str1,str2)) //comparing two strings
        flag=1;
    if(flag==1) // it confirms that there is a unmatch charecters
        cout<<str1<<" is a not palindrome"<<endl;  
    else
        cout<<str1<<" is a palindrome"<<endl;
        return 0;
}