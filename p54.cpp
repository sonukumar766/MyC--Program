// c++ program to find the fisrt and second maximum of numbers in the given array
#include<iostream>
using namespace std;

void print2Maximum(int arr[], int size){
    int i, first, second;

    if(size<2){
        cout<<"invalid the input"<<endl;
    }
    
    first=second=INT_MIN;
    for(i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }cout<<"The first max is "<<first<< " and the second max is "<<second<<endl;
}

// driver code
int main(){
    int arr[]={12,34,23,34,23,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    print2Maximum(arr, size);
    return 0;

}