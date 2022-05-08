// friend function in c++
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
        cout<<endl;
    }
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }


};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

// driver code
int main(){
    Complex c1,c2, c3;

    c1.setNumber(1,3);
    c1.printNumber();

    c2.setNumber(3,5);
    c2.printNumber();

    c3=sumComplex(c1, c2);
    c3.printNumber();

    return 0;
}