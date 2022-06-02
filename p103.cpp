// dynamic memeory allocation using malloc() function
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number og integers: "<<endl;
    cin>>n;
    int* ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        cout<<"Memory is not available"<<endl;
        exit(1);
    }
    for(int i=0;i<n;i++){
        cout<<"Enter the integer: ";
        cin>>*(ptr+i);
    }
    for(int i = 0; i<n; i++){
        cout<<"The element number "<<(i+1)<<endl;
        cout<<*(ptr+i)<<endl;
    }
    
    return 0;
}