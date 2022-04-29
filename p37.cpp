// c++ program to reverse an array
#include<bits/stdc++.h>
using namespace std;
void rverseArray(int arr[], int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++; // same as start=start+1;
        end--; //same as end=end-1;
    }

}
// printing the reversed array
void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

        cout<<endl;
    }

}
// driver code
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    //to print the original array
    printArray(arr,n);
    rverseArray(arr, 0 , n-1);
    cout<<"REversed array is "<<endl;
    //to print the reversed array
    printArray(arr, n);
    return 0;
}