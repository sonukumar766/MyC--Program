// creating class and ojects
#include<iostream>
using namespace std;

class Number{
    private:
      int a, b, c;
    public:
      int d, e;

      void setData(int a1, int b1, int c1);
      void getData(){
          cout<<a<<endl;
          cout<<b<<endl;
          cout<<c<<endl;
          cout<<d<<endl;
          cout<<e<<endl;
      }

};
void Number :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(void){
    Number n1;
    n1.d=98;
    n1.e=12;
    n1.setData(2,3,4);
    n1.getData();
    return 0;

}

 