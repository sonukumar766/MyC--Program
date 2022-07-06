// call by value 
// findb the multiplication by passing two value in the fuction
#include<iostream>
using namespace std;

int muloftwo(int x, int y){
    return (x*y);
}

int main(){

    int multiplication = muloftwo(12,34);
    cout<<"Multiplication of 12 and 34 is "<<multiplication<<endl;
    
    return 0;
}