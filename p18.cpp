#include<iostream>
using namespace std;
template <class T1>
class Number{
   public:
    T1 a, b,c;

    Number(T1 a1, T1 b1, T1 c1){
        a=a1;
        b=b1;
        c=c1;
    }
    T1 getSum(){
        return a+b+c;
    }
    
};

int main(){
    Number<int>n1(12,34,56);
    cout<<"sum="<<n1.getSum()<<endl;
    return 0;
}