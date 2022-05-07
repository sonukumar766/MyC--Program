// c++ program to reverse the array's element
#include<iostream>
using namespace std;
int main(){
    int arr[]{12,34,55,67,86};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int j=size-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}