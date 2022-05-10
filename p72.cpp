// friend class in c++
#include<iostream>
using namespace std;

// forward declaration
class complex;

class calculator{
    public:
    int sumRealComplex(complex, complex);
    int sumComComplex(complex, complex);


};

class complex{
    int a;
    int b;
    friend class calculator;
    public:

    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
        cout<<endl;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

int calculator::sumRealComplex(complex c1, complex c2){
    return (c1.a+c2.a);
}

int calculator :: sumComComplex(complex c1, complex c2){
    return (c1.b+c2.b);
}

int main(){

    complex c1, c2;

    c1.setNumber(2,3);
    c1.printNumber();

    c2.setNumber(5,6);
    c2.printNumber();
    cout<<endl;

    calculator cal1, cal2;
    int res1=cal1.sumRealComplex(c1,c2);
    int res2=cal2.sumComComplex(c1,c2);

    cout<<"sum of real part of complex number is "<<res1<<endl;
    cout<<"sum of imaginary part of complex number is "<<res2<<endl;
    
    return 0;
}