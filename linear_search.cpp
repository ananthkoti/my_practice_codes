#include<iostream>
using namespace std;
int main(){
    int target,size,j;//target for search element and size for array size
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements into of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the target element: ";
    cin>>target;
    for(int j=0;j<size;j++){
        if(arr[j]==target){
            cout<<target<<" is found at location "<<j+1;
            break;
        }
    }
    if(j==size){
        cout<<target<<" is not found in this array ";
    }
}