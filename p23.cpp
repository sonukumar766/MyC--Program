// c++ programm scope resolution operator
#include<iostream>
using namespace std;
int var1=23;
int main(void){
    int var1=90;
    cout<<var1<<endl<< ::var1<<endl;
}
