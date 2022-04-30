// c++ program to add the element of arrray by creating the class
#include<iostream>
using namespace std;

template<class T>
class vector{
    public:
     T*arr;
     int size;
      vector(int m){
          size=m;

          arr = new T[size];

      }
    double getSum(vector &v){
          T d=0;
          for(int i=0;i<size;i++){
              d+=this->arr[i]+arr[i];
          }return d;
      }

};
// driver code
int main(){
   vector<float>v1(3);
   v1.arr[0]=90;
   v1.arr[1]=78;
   v1.arr[2]=77;

   vector<float>v2(3);
   v2.arr[0]=23.4;
   v2.arr[1]=78.8;
   v2.arr[2]=77.7;

   double a=v1.getSum(v2);
   cout<<"sum is "<<a<<endl;
   return 0;

}
