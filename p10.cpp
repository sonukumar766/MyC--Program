// c++ program to find the sum of the element of the given array
#include<iostream>
//user define header file
#include "this.h"
using namespace std;
int sumOfElement(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];

    }return sum;
}

// drive code
int main(){
    int arr[]={12,34,45,56,66};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<sumOfElement(arr,size)<<endl;
    return 0;
}