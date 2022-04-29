// c++ program to illustrate type casting in c++
// type casting is the conversion of one variable into another type
#include<bits/stdc++.h>
using namespace std;
int main(){
    float var=89.78;
    cout<<"the variable before typecasting is "<<var<<endl;
    cout<<"the variable after typecasting is "<<(int)var<<endl;
    cout<<"the variable after typecasting is "<<int(var)<<endl;
    // reference variable means giving the nickname to the variable
    int var1=90;
    int &y=var1;
    cout<<"The value of var1 is "<<var1<<endl;
    cout<<"the value of y is "<<y<<endl;
    // expression for adding float var (by converting into integer) and int var1
    int sum=int(var)+var1;
    cout<<"the sum of var and var1 is "<<sum<<endl;
    //variable can be change but declaration of variable is once
    int var2=89;
    var2=100;
    cout<<"The updated value of var2 is "<<var2<<endl;
    return 0;

}