// structure in c++
#include<iostream>
using namespace std;

struct Point{
    int x=0;  
              // it is considered as default arguments.
    int y=1;

};

int main(){

    struct Point p1;

    cout<<"x = "<<p1.x<<", y = "<<p1.y<<endl;

    // initializing the value of y
    p1.y=4;
    cout<<"x = "<<p1.x<<", y = "<<p1.y<<endl;
    
    return 0;
}