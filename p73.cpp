// printing the two repeated element in t he array
#include<iostream>
using namespace std;
void printTwoElement(int arr[], int size){
    int i,j,display=0;
    int visited[size];
    for(i=0;i<size;i++){
        if(visited[size]==1){
            continue;
        }
        int count=0;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                visited[j]==1;
                ++count;
                break;
            }
        }if(count>0 && display<2){
            ++display;
            cout<<"the repeating element is "<<arr[i]<<endl;
        }
    }
}

int main(){

    int arr[]={2,3,4,2,3,4,5,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    // calling the function
    printTwoElement(arr, size);
    
    return 0;
}