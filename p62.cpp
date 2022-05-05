// template with default oarameters
#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Sonu{
    T1 a;
    T2 b;
    T3 c;
    public:
    Sonu(T1 X, T2 Y, T3 Z){
        a=X;
        b=Y;
        c=Z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

// driver code
int main(){
    Sonu<int, float, char>s1(12,34.5,'s');
    s1.display();
    return 0;
}