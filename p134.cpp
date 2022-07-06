// call by reference 
#include<iostream>
using namespace std;

void swappedtwonumber(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void printValue(int x, int y){
    cout<<"x = "<<x<<", y ="<<y<<endl;
}

// driver code

int main(){

    int x=90;
    int y=88;

    swappedtwonumber(&x, &y);

    printf("After swapping: ");

    printValue(x, y);
    
    return 0;
}