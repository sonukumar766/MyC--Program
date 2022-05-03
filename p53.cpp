// by creating the class find the first and second smallest element in the array
#include<iostream>
using namespace std;

// creating Vector class
class Vector{
    
  
    int size;
    public:
    int*arr;
    
    Vector(int m){
        size=m;
        arr=new int[size];
    }

    void print2Smallest(){
        int i, first, second;
        if(size<2){
            cout<<"invalid input"<<endl;
        }
        first=second=INT_MAX;
        for(i=0; i<size ; i++){
            if(this->arr[i]<first){
                second=first;
                first=arr[i];


            }else if(this->arr[i]<second && this->arr[i]!=first){
                second=this->arr[i];
            }

        }if(second==INT_MAX){
            cout<<"there is no second smallest in the given array"<<endl;
        }else{
            cout<<"the first smallest number in the array is "<<first<<" and the second smallest number in the array is "<<second<<endl;

        }

    }
};

// driver code (creting the vector object)
int main(){
    Vector v1(5);
    v1.arr[0]=2;
    v1.arr[1]=3;
    v1.arr[2]=89;
    v1.arr[3]=12;
    v1.arr[4]=0;

    v1.print2Smallest();
    return 0;

}