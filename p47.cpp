// constants, manipulators & operator precendance in c++
#include<iostream>
using namespace std;
int main(){
    //constant in c++
    const int a=90; // this variable is not changable because const key word make it constant
    cout<<"The value of constant integer is "<<a<<endl;
    //a=88; it will through an error
    // but without const keyword variable can change their value as like below
    int var=90;
    cout<<"The value of var was "<<var<<endl; /* as you seen here the value you can change in the program as per need
                                                        */
    var=88;
    cout<<"The value of var is "<<var<<endl;

    //constant in c++
    const float var1=78.9;
    cout<<"The value of constant float is "<<var1;
   // var1=89.7; it will give an error 
    return 0;
}