// constructor overloading in c++
#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
    Complex(int x, int y){
        a=x;
        b=y;
    }
    Complex(int x){
        a=x;
        b=1;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// driver code

int main(){

    Complex c1(12,34);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();
    
    return 0;
}