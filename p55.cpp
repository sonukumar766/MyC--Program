// making calculator that perform the addition, subtraction, multiplication and division on the two numbers
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char Operator='+';
    switch(Operator){
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"This operator is invalid for this calculator"<<endl;
        break;

    }
    return 0;
}