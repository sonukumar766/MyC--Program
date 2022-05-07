// printing the complex number
#include<iostream>
using namespace std;

class Complex{

    int a;
    int b;

    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
        cout<<endl;
    }

    void printNumber(){
        cout<<a<<" + i"<<b<<endl;
    }

};

// driver code
int main(){
    Complex c1, c2, c3;
    c1.setData(12,34);
    cout<<"The complex number c1 is "<<endl;
    c1.printNumber();

    c2.setData(22,33);
    cout<<"The complex number c2 is "<<endl;
    c2.printNumber();

    c3.setData(33,44);
    cout<<"The complex number c3 is "<<endl;
    c3.printNumber();

    return 0;

 
}