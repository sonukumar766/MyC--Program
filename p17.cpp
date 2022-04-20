#include<iostream>
using namespace std;

// creating the niumber class
class Number{
    public:
     int a, b,c;
    public:
     float d,e;
      void setData1(int a1, int b1, int c1);

      void setData2(float d1, float e1);

      int getSum1(){
          return a+b+c;
      }
       
       float getSum2(){
           return d+e;
       }
};

void Number :: setData1(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

void Number :: setData2(float d1, float e1){
    d=d1;
    e=e1;
}

int main(void){
    Number n1;
    n1.setData1(12,34,56);
    n1.setData2(12.3,45.5);
    cout<<"Sum of integer number is "<<n1.getSum1()<<endl;
    cout<<"Sum of flaot number is "<<n1.getSum2()<<endl;
    
}