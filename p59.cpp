// c++ program to find the missing values from the list containing numbers from 1 to n;
#include<iostream>
using namespace std;

// function to finding the missing numbers in the arrays
int missingValues(int arr[], int n, int size){
    int sum=0; // where sum is the sum of first n natural numbers
    sum=n*(n+1)/2;

    int sum1=0; // intializing the sum1 which is the sum of the array without the missing number
    for(int i=0;i<size;i++){
        sum1+=arr[i];
    }
    return (sum-sum1);
}

// drive code

int main(void){
    int arr[]={1,2,3,4,5,6,7,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"missingValues is "<<missingValues(arr, 10, size);
}