#include<iostream>
using namespace std;
int n,count=0,i;
 void display()
 {      int index=-1; //to print the value(element) of the particular index
        cout<<"enter the size of an array: "; //take array size from user
        cin>>n;
        int arr[n];
        cout<<"enter the elements into an array "<<endl; 
        for(int i=0;i<n;i++){  //enter array elements
            cin>>arr[i];
        }
        
            for( int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){ //traverse by comparing elements
                for( int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
                    if(arr[i]==arr[j]){ //when compared elements are equal increase count
                        count++;
                    }
                }
            }
            index=i;//store index value in some variable to print element
                         //of that index to be used in the next statement 
            if(count>n/2){ //if count of the element is morethan the half the size of the array
                cout<<"the majority element is: "<<arr[index]; //then print major element
            }
            else{
                cout<<"no majority element exists"<<endl;//if count of the element is lessthan the half of the size of the array
            }

}
int main(){
    display();
}

