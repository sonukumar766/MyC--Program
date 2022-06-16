// constructor with default arguments in c++
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a, int b=6, int c = 9){
        data1=a;
        data2=b;
        data3=c;
    }
    void printData(){
        cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
    }

};

// driver code

int main(){

    Simple s(1,2);
    s.printData();
    
    return 0;
}