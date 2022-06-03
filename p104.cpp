// c++ program to find the intersection of two arrays
#include<iostream>
using namespace std;

void intersectionOfTwo(int arr1[], int arr2[], int m, int n){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr2[j]<<" ";
            }
        }
    }
}

int main(){
    int arr1[]={2,3,4,1,0};
    int arr2[]={4,1,0,10};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    intersectionOfTwo(arr1, arr2, m,n);
    
    return 0;
}