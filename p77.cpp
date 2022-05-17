//default constructor
#include<iostream>
using namespace std;

class Number{
    int a;
    int b;
    public:
    Number(){
        a=90;
        b=99;
    }
    void printNumber(){
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){

    Number n1;
    n1.printNumber();
    
    return 0;
}