// c++ program to find the missing values in the list containing 1 to n natoral numbers
#include<iostream>
using namespace std;

// function to return the missing values in the array
int missingValue(int arr[], int n){

    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        total-=arr[i];
    }

    return total;
}

// driver code
int main(){

    int arr[]={1,2,3,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The missing_number is "<<missingValue(arr, n)<<endl;

}