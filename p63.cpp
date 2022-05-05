// function template in c++
#include<iostream>
using namespace std;

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

// driver code
int main(void){
    float a;
    a=funcAverage(2,3);
    printf("The average of a and b is %0.3f", a);
}