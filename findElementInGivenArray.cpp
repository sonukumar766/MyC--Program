#include<iostream>
int findAnElement(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return arr[i];
    }std::cout<<"Not Present In Array"<<"\n";
    return 0;

}

//drive code
int main(){
    int arr[]={23,34,78,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d", findAnElement(arr, n, 78));
    return 0;
}