//Writing our first c++ Template in vs code editor
#include<iostream>
using namespace std;
class vector{
    public:
    int*arr;
    int size;
    public:
    vector(int m){
        size=m;
        arr=new int[size];
       
        
    }
    int dotProduct(vector &v){
        int d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]* v.arr[i];

       }return d;
    }
};
int main(){
    vector v1(3);
    v1.arr[1]=4;
    v1.arr[2]=0;
    v1.arr[3]=1;


    vector v2(3);
    v2.arr[0]=6;
    v2.arr[1]=4;
    v2.arr[2]=3;

    int a=v1.dotProduct(v2);
    cout<<a<<endl;
  
    return 0;

}