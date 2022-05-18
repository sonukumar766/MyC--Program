// c++ program to print minimum and maximum of array
#include<iostream>
using namespace std;

void printMinMax(int arr[], int size){
    int min, max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            
        }if(arr[i]>max){
            max=arr[i];
        }
    }cout<<"the minimum of the array is "<<min<<" and "<<"the maximum of array is "<<max<<endl;
}

// driver code

int main(){

    int arr[]={12,34,56,23,4244,234};
    int size=sizeof(arr)/sizeof(arr[0]);

    printMinMax(arr, size);




    
    return 0;
}