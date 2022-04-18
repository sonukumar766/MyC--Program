// template with the multiple parameters
#include<iostream>
using namespace std;

template<class T1, class T2>
class Number{
    public:
     T1 a,b,c;
    public:
     T2 d,e,f;
       
      void setData1(T1 a1, T1 b1, T1 c1 ){
          a=a1;
          b=b1;
          c=c1;
      }

      void setData2(T2 d1, T2 e1, T2 f1){
          d=d1;
          e=e1;
          f=f1;
      }

      T2 getSum(){
          return a+b+c+d+e+f;
      }

};
int main(void){

    Number<int, float>n1;
    n1.setData1(23,45,67);
    n1.setData2(12.3, 34.7, 89.3);
    cout<<n1.getSum();
}