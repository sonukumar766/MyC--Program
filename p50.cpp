// c++ templates with default parameters
#include<iostream>

using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Sonu{
    public:
     T1 a;
     T2 b;
     T3 c;
    
     Sonu(T1 x, T2 y,T3 z){
         a=x;
         b=y;
         c=z;
     }
     void display(){
         cout<<"The value of a is "<<a<<endl;
         cout<<"The value of b is "<<b<<endl;
         cout<<"The value of c is "<<c<<endl;
     }
};

// driver code
int main(void){
    Sonu<>s(12,23.45,'s');
    s.display();
    cout<<endl;
    Sonu<float, char,char>k(12.3,'s', 'k');
    k.display();
    cout<<endl;
    Sonu<char, char,char>s1('s','o','n');
    s1.display();
}