// friend classes and memeber friends functions in c++
#include<iostream>
using namespace std;
class complex;

class calculator{

    public:

    int sumRealComplex(complex, complex);

};
class complex{
    int a;
    int b;
    friend int calculator :: sumRealComplex(complex o1, complex o2);
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
        cout<<endl;
    }
    void printNumber(){
        cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator :: sumRealComplex(complex o1, complex o2){
    return (o1.a+o2.a);
}

int main(){

    complex o1, o2;

    o1.setNumber(12,34);
    o1.printNumber();

    o2.setNumber(33,56);
    o2.printNumber();
    cout<<endl;

    calculator calc;
    int result=calc.sumRealComplex(o1,o2);
    cout<<"the sum of real part of the complex numbers is "<<result<<endl;

    
    return 0;
}