// create a template to add the numbers
#include<iostream>
using namespace std;

template<class T>

class Vector{
    public:
    T*arr;
    T size;
        Vector(T m){
            size=m;
            arr=new T[size];
        }
    T sum(Vector &V){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->V.arr[i];
        }
        return d;
    }

    
};

int main(){

    Vector<int>V1(3);
    V1.arr[0]=89;
    V1.arr[1]=90;
    V1.arr[2]=89;
    
    int a = sum(V1);
    cout<<a;
    return 0;

}