// create the templates 
#include<bits/stdc++.h>
using namespace std;

// creating template
template<class T1, class T2>
class Number{
    T1 a;
    T2 b;
    public:
      void setValue(T1 a1){
          a=a1;
      }
      void setValue1(T2 b1){
          b=b1;
      }
      float getSum(){
          return a+b;
      }

};

// driver code
int main(void){
    Number<int, float>n1;
    n1.setValue(12);
    n1.setValue1(12.35);
    cout<<"The sum of a and b is "<<n1.getSum()<<endl;
}