#include<iostream>
using namespace std;

template<class T1, class T2>
class myClass{
    public:
      
      T1 data1;
      T2 data2;
      myClass(T1 a, T2 b){
          data1=a;
          data2=b;

      }
      void display(){
          cout<<this->data1<<endl;
          cout<<this->data2<<endl;
      }
};

int main(void){
    myClass<int, float>n1(23, 89.7);
    n1.display();
}