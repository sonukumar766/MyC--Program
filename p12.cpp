// create the template to add the integers
#include<iostream>
using namespace std;

template <class T>
class Number{
    private:
     T a,b,c;
    public:
     T d,e;
    
       void setData(T a1, T b1, T c1){
           a=a1;
           b=b1;
           c=c1;
       }       
       T getSum(){
           return a+b+c+d+e;
       }
};

int main(void){
    Number<float> n1;
    n1.d=9.0;
    n1.e=78.0;
    n1.setData(12.4,34.8,55.7);
    cout<<n1.getSum();
}