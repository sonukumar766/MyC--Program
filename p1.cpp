// c++ program to find the largest element in an array
#include<iostream>
int maxOfArray(int arr[], int size){

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            return max;
        }
    }return 0;


}

//drive code
int main(){

    int arr[]={34,66,12,900,456};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d", maxOfArray(arr,  size));
    return 0;

}