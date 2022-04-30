// adding the element of the array by creating the class
#include<iostream>
using namespace std;

class vector{
    public:
     int*arr;
     int size;
     vector(int m){
         size=m;
         arr=new int[size];
     }
     int sumofelement(){
         int d=0;
         for(int i=0; i<size;i++){
             d+=this->arr[i];
         }
         return d;

     }
     
};

// driver code
int main(void){
    vector v1(3);
    v1.arr[0]=89;
    v1.arr[1]=90;
    v1.arr[2]=100;
    cout<<v1.sumofelement();
    return 0;
}