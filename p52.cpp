// c++ program to find the first and secont smallest number in the array
#include<bits/stdc++.h>
using namespace std;

void print2Smallest(int arr[], int size){
    int first, second;
   

    if(size<2){
        cout<<"Invalid input size"<<endl;
    }

    first=second=INT_MAX;
    for(int i=0; i<size;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
        
    }
    if(second==INT_MAX){
            cout<<"There is no second smallest"<<endl;
    }
    else{
        cout<<"The first smallest is "<<first<<" and the second largest is "<<second<<endl;
    }

}

// driver code
int main(){
    int arr[]={12,23,55,2,45,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    print2Smallest(arr,size);
}