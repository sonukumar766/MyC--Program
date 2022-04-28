// c++ programm to search an element in the given array
#include<iostream>
using namespace std;
// function to return the searched element in the given array
int searchedElement(int arr[], int size, int k){
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            return i; // returning the index of the element in the array;
        }

    }return -1; // if the  the element is not present in the given array;
}

// driver code
int main(){
    int k;
    cout<<"enterd the search element";
    cin>>k;
    int arr[]={12,34,55,345,34,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<searchedElement(arr, size, k);
    return 0;
}