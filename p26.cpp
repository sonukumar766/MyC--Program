// typecasting of the variable in c++
#include<iostream>
using namespace std;
int main(void){
    int a=45;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of  a is "<<float(a)<<endl;
    float b=45.67;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c=int(b);
    cout<<"the value of c is "<<c<<endl;
    cout<<"The expresion is "<<a+b<<endl;
    cout<<"The expresion is "<<a+int(b)<<endl;
    cout<<"The expresion is "<<a+(int)b<<endl;


}