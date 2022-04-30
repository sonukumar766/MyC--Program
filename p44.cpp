// c++ program to multiply the elements of an array
#include<iostream>
using namespace std;

class vector{
    public:
     int size;
     int*arr;

     vector(int m){
         size=m;
         arr = new int[size];
     }

     int getMultiplication(){
         int mul=1;
         for(int i=0;i<size;i++){
             mul=mul*this->arr[i];
         }
         return mul;
     }
};

// driver code
int main(void){
    vector v1(4);
    v1.arr[0]=7;
    v1.arr[1]=8;
    v1.arr[2]=7;
    v1.arr[3]=7;
    cout<<"Multiplication of the element of the array is "<<v1.getMultiplication()<<endl;
}
