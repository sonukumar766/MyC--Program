// templates with default parameters
#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class myData{
    T1 data1;
    T2 data2;
    T3 data3;

    public:
    myData(T1 x, T2 y, T3 z){
        data1=x;
        data2=y;
        data3=z;
    }

    void display(){
        cout<<"The value of data1 is "<<data1<<endl;
        cout<<"The value of data2 is "<<data2<<endl;
        cout<<"The value of data3 is "<<data3<<endl;

    }


};
// driver code
int main(){
    myData<int, char, float>obj(12,'s', 23.4);
    obj.display();
    return 0;
}