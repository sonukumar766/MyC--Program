// binary search to search an element in the sorted array
#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x){
    if(right>=left){
        int mid=left+(right-left)/2;

        if(arr[mid]==x)
          return mid;

        else if(mid>x)
         return binarySearch(arr, 0, mid-1, x);

        else 
         return binarySearch(arr, mid+1, right, x); 
    }
    return -1; // if element is not in the array
}
// driver code
int main(){
    int arr[]={12,34,56,67,78,89};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"the index searched element is "<<binarySearch(arr, 0, n-1, 78);
    return 0;
}